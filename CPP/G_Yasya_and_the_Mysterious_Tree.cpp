#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005;
const int BITS = 30;

struct TrieNode {
    TrieNode* child[2];
    TrieNode() {
        child[0] = child[1] = nullptr;
    }
};

void insertTrie(TrieNode* root, int num) {
    TrieNode* cur = root;
    for (int i = BITS; i >= 0; --i) {
        int bit = (num >> i) & 1;
        if (!cur->child[bit])
            cur->child[bit] = new TrieNode();
        cur = cur->child[bit];
    }
}

int maxXor(TrieNode* root, int num) {
    TrieNode* cur = root;
    int maxXor = 0;
    for (int i = BITS; i >= 0; --i) {
        int bit = (num >> i) & 1;
        if (cur->child[1 - bit]) {
            maxXor |= (1 << i);
            cur = cur->child[1 - bit];
        } else if (cur->child[bit]) {
            cur = cur->child[bit];
        }
    }
    return maxXor;
}

vector<pair<int, int>> adj[MAXN];
int pathXor[MAXN];

void dfs(int node, int parent, int xorSum) {
    pathXor[node] = xorSum;
    for (auto& edge : adj[node]) {
        int next = edge.first;
        int weight = edge.second;
        if (next != parent) {
            dfs(next, node, xorSum ^ weight);
        }
    }
}

void cleanupTrie(TrieNode* root) {
    if (root == nullptr) return;
    cleanupTrie(root->child[0]);
    cleanupTrie(root->child[1]);
    delete root;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        for (int i = 1; i <= n; ++i) {
            adj[i].clear();
        }

        for (int i = 1; i < n; ++i) {
            int u, v, w;
            cin >> u >> v >> w;
            adj[u].emplace_back(v, w);
            adj[v].emplace_back(u, w);
        }

        TrieNode* root = new TrieNode();
        dfs(1, -1, 0);
        for (int i = 1; i <= n; ++i) {
            insertTrie(root, pathXor[i]);
        }

        int currentXor = 0;
        while (m--) {
            char type;
            cin >> type;
            if (type == '^') {
                int y;
                cin >> y;
                currentXor ^= y;
            } else if (type == '?') {
                int v, x;
                cin >> v >> x;
                x ^= currentXor; // Apply the global XOR change
                cout << maxXor(root, pathXor[v] ^ x) << '\n';
            }
        }

        cleanupTrie(root); // Cleanup Trie to prevent memory leak
    }
    return 0;
}
