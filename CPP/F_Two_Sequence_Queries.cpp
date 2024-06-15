#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

const int MOD = 998244353;

struct SegmentTree {
    struct Node {
        ll sum = 0;     // Sum of products A[i] * B[i]
        ll lazyA = 0;   // Lazy value to be added to A[i]
        ll lazyB = 0;   // Lazy value to be added to B[i]
    };

    vector<Node> tree;
    vector<ll> A, B; // Current values of A and B after all operations
    int n;

    SegmentTree(const vector<int>& A_init, const vector<int>& B_init) {
        n = A_init.size();
        A = vector<ll>(A_init.begin(), A_init.end());
        B = vector<ll>(B_init.begin(), B_init.end());
        tree.resize(4 * n);
        build(0, 0, n - 1);
    }

    void build(int node, int start, int end) {
        if (start == end) {
            tree[node].sum = A[start] * B[start] % MOD;
        } else {
            int mid = (start + end) / 2;
            build(2 * node + 1, start, mid);
            build(2 * node + 2, mid + 1, end);
            tree[node].sum = (tree[2 * node + 1].sum + tree[2 * node + 2].sum) % MOD;
        }
    }

    void updateRange(int l, int r, int type, ll value) {
        updateRange(0, 0, n - 1, l, r, type, value);
    }

    void updateRange(int node, int start, int end, int l, int r, int type, ll value) {
        if (start > r || end < l) return;

        push(node, start, end);

        if (start >= l && end <= r) {
            if (type == 1) { // Apply to A
                tree[node].lazyA = (tree[node].lazyA + value) % MOD;
            } else if (type == 2) { // Apply to B
                tree[node].lazyB = (tree[node].lazyB + value) % MOD;
            }
            push(node, start, end);
            return;
        }

        int mid = (start + end) / 2;
        updateRange(2 * node + 1, start, mid, l, r, type, value);
        updateRange(2 * node + 2, mid + 1, end, l, r, type, value);
        tree[node].sum = (tree[2 * node + 1].sum + tree[2 * node + 2].sum) % MOD;
    }

    void push(int node, int start, int end) {
        if (tree[node].lazyA != 0 || tree[node].lazyB != 0) {
            if (start != end) {
                int mid = (start + end) / 2;
                propagate(node, 2 * node + 1, start, mid);
                propagate(node, 2 * node + 2, mid + 1, end);
            }

            ll numElements = end - start + 1;
            ll updateSum = ((tree[node].lazyA * B[start]) % MOD +
                            (tree[node].lazyB * A[start]) % MOD) % MOD;
            tree[node].sum = (tree[node].sum + numElements * updateSum) % MOD;

            tree[node].lazyA = 0;
            tree[node].lazyB = 0;
        }
    }

    void propagate(int parent, int child, int start, int end) {
        tree[child].lazyA = (tree[child].lazyA + tree[parent].lazyA) % MOD;
        tree[child].lazyB = (tree[child].lazyB + tree[parent].lazyB) % MOD;
        push(child, start, end);
    }

    ll queryRange(int l, int r) {
        return queryRange(0, 0, n - 1, l, r);
    }

    ll queryRange(int node, int start, int end, int l, int r) {
        if (start > r || end < l) return 0;

        push(node, start, end);  // Ensure all updates are applied

        if (start >= l && end <= r) {
            return tree[node].sum % MOD;
        }

        int mid = (start + end) / 2;
        ll left_sum = queryRange(2 * node + 1, start, mid, l, r);
        ll right_sum = queryRange(2 * node + 2, mid + 1, end, l, r);
        return (left_sum + right_sum) % MOD;
    }
};

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N), B(N);

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    SegmentTree segTree(A, B);

    while (Q--) {
        int type;
        cin >> type;
        if (type == 1 || type == 2) {
            int l, r, x;
            cin >> l >> r >> x;
            segTree.updateRange(l - 1, r - 1, type, x);
        } else if (type == 3) {
            int l, r;
            cin >> l >> r;
            cout << segTree.queryRange(l - 1, r - 1) << endl;
        }
    }

    return 0;
}
