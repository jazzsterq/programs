#include <bits/stdc++.h>
using namespace std;
 
// --- MODULO arithmetic ---
 
const long long MOD = 998244353;
 
// Maximum array size (a little more than the maximum n needed)
const int MAXN = 400005; 
 
// We'll precompute powers of 2 and their inverses mod MOD:
long long pow2Arr[MAXN+1], inv2Arr[MAXN+1];
 
// Fast modular exponentiation:
long long modexp(long long base, long long exp, long long m){
    long long result = 1 % m;
    base %= m;
    while(exp > 0){
        if(exp & 1) result = (result * base) % m;
        base = (base * base) % m;
        exp >>= 1;
    }
    return result;
}
 
// Precompute arrays for 0 <= i <= n.
void precomputePow2(int n){
    pow2Arr[0] = 1;
    for (int i = 1; i <= n; i++){
        pow2Arr[i] = (pow2Arr[i-1] * 2) % MOD;
    }
    for (int i = 0; i <= n; i++){
        inv2Arr[i] = modexp(pow2Arr[i], MOD-2, MOD);
    }
}
 
// --- Aggregate structure for a contiguous (sorted) segment ---
// In the “merged” segment (of length L) we interpret the positions as 1,2,…,L.
// In particular, an element at position i “contributes” B[i]*inv2^i (and B[i]*2^(i-1)).

struct Agg {
    int size;      // number of elements in the segment
    long long sum_inv; // = sum_{i=1}^{size} (B[i] * inv2^(i)) mod MOD
    long long sum_pow; // = sum_{i=1}^{size} (B[i] * pow2^(i-1)) mod MOD
    long long F1;      // = sum_{1<= i < j <= size} B[i]*B[j]*2^(j-i-1)
    long long F2;      // = sum of products of adjacent elements in the segment
    long long first;   // first element (in sorted order)
    long long last;    // last element
};
 
// The idd aggregate (for an empty segment):
Agg idd(){
    Agg a;
    a.size = 0;
    a.sum_inv = a.sum_pow = a.F1 = a.F2 = 0;
    a.first = a.last = 0;
    return a;
}
 
// Combine two aggregates A and B (where A comes before B).
Agg combineAgg(const Agg &A, const Agg &B){
    if(A.size == 0) return B;
    if(B.size == 0) return A;
    Agg ret;
    ret.size = A.size + B.size;
    ret.sum_inv = (A.sum_inv + (B.sum_inv * inv2Arr[A.size]) % MOD) % MOD;
    ret.sum_pow = (A.sum_pow + (B.sum_pow * pow2Arr[A.size]) % MOD) % MOD;
    long long cross = ( (pow2Arr[A.size] * A.sum_inv) % MOD * B.sum_pow ) % MOD;
    ret.F1 = (A.F1 + B.F1 + cross) % MOD;
    ret.F2 = (A.F2 + B.F2 + (A.last * B.first) % MOD) % MOD;
    ret.first = A.first;
    ret.last = B.last;
    return ret;
}
 
// --- Treap Node and functions ---
// Each node corresponds to one copy of a value and is “keyed” by (value, id).
// (The extra id is used to break ties.)
 
struct Node {
    long long val; // the stored value
    int id;        // original index (for tie–breaking)
    int priority;
    int size;      // subtree size
    Agg agg;       // the aggregate for the subtree (in sorted order)
    Node *left, *right;
};
 
int getSize(Node* t) { return t ? t->size : 0; }
 
// Recalculate node t from its children.
void updateNode(Node* t) {
    if(!t) return;
    t->size = 1 + getSize(t->left) + getSize(t->right);
    // For a single node (as a segment of length 1):
    Agg cur;
    cur.size = 1;
    // its contribution: sum_inv = val * inv2^1, sum_pow = val * 2^0 = val.
    cur.sum_inv = (t->val % MOD) * inv2Arr[1] % MOD;
    cur.sum_pow = t->val % MOD;
    cur.F1 = 0;
    cur.F2 = 0;
    cur.first = t->val % MOD;
    cur.last = t->val % MOD;
    Agg leftAgg = idd();
    if(t->left) leftAgg = t->left->agg;
    Agg rightAgg = idd();
    if(t->right) rightAgg = t->right->agg;
    Agg merged = combineAgg(leftAgg, cur);
    merged = combineAgg(merged, rightAgg);
    t->agg = merged;
}
 
// Create a new node for value "val" with id "id".
Node* newNode(long long val, int id) {
    Node* n = new Node();
    n->val = val;
    n->id = id;
    n->priority = rand();
    n->left = n->right = nullptr;
    n->size = 1;
    n->agg.size = 1;
    n->agg.sum_inv = (val % MOD) * inv2Arr[1] % MOD;
    n->agg.sum_pow = val % MOD;
    n->agg.F1 = 0;
    n->agg.F2 = 0;
    n->agg.first = val % MOD;
    n->agg.last = val % MOD;
    return n;
}
 
// Standard treap split – splitting by key (here the key is (val,id)).
void split_by_key(Node* t, long long val, int id, Node*& L, Node*& R) {
    if(!t) { L = R = nullptr; return; }
    // Compare keys lexicographically.
    if(t->val < val || (t->val == val && t->id < id)) {
        split_by_key(t->right, val, id, t->right, R);
        L = t;
        updateNode(L);
    } else {
        split_by_key(t->left, val, id, L, t->left);
        R = t;
        updateNode(R);
    }
}
 
// Merge two treaps L and R (assuming all keys in L are less than those in R).
Node* merge_treap(Node* L, Node* R) {
    if(!L || !R) return L ? L : R;
    if(L->priority > R->priority) {
        L->right = merge_treap(L->right, R);
        updateNode(L);
        return L;
    } else {
        R->left = merge_treap(L, R->left);
        updateNode(R);
        return R;
    }
}
 
// Insert "item" into treap t.
void treap_insert(Node*& t, Node* item) {
    if(!t) { t = item; return; }
    if(item->priority > t->priority) {
        split_by_key(t, item->val, item->id, item->left, item->right);
        t = item;
    } else {
        if(item->val < t->val || (item->val == t->val && item->id < t->id))
            treap_insert(t->left, item);
        else
            treap_insert(t->right, item);
    }
    updateNode(t);
}
 
// Erase the node with key (val, id) from treap t.
void treap_erase(Node*& t, long long val, int id) {
    if(!t) return;
    if(t->val == val && t->id == id) {
        Node* temp = merge_treap(t->left, t->right);
        delete t;
        t = temp;
    } else {
        if(val < t->val || (val == t->val && id < t->id))
            treap_erase(t->left, val, id);
        else
            treap_erase(t->right, val, id);
        if(t) updateNode(t);
    }
}
 
// Global treap root.
Node* root = nullptr;
 
// For a complete tree, the “aggregate” (in root->agg) represents the sorted order.
// In our formulation, the answer is:
 
//   f(A) = F1 + F2   (mod MOD)
 
long long getF() {
    if(!root) return 0;
    Agg total = root->agg;
    return (total.F1 + total.F2) % MOD;
}
 
// --- Main – reading test cases, processing updates ---
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; 
    cin >> T;
    precomputePow2(MAXN);
    while(T--){
        int N, Q;
        cin >> N >> Q;
        vector<int> A(N+1);
        for (int i = 1; i <= N; i++){
            cin >> A[i];
        }
 
        // Build treap from the N elements.
        root = nullptr;
        for (int i = 1; i <= N; i++){
            Node* newnode = newNode(A[i], i);
            treap_insert(root, newnode);
        }
 
        cout << getF() % MOD << "\n";
 
        // Process each update.
        for (int qi = 0; qi < Q; qi++){
            int x, v;
            cin >> x >> v;
            // Remove the old copy (key is (A[x], x)).
            treap_erase(root, A[x], x);
            A[x] = v;
            Node* newnode = newNode(v, x);
            treap_insert(root, newnode);
 
            cout << getF() % MOD << "\n";
        }
 
        // Free the treap.
        function<void(Node*)> freeTree = [&](Node* t) {
            if(!t)return;
            freeTree(t->left);
            freeTree(t->right);
            delete t;
        };
        freeTree(root);
        root = nullptr;
    }
    return 0;
}
