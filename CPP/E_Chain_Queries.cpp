#include <bits/stdc++.h>
using namespace std;

struct DSU {
    vector<int> parent, _size;
    DSU(int n) : parent(n), _size(n, 1) {
        iota(parent.begin(), parent.end(), 0); 
    }

    int find(int u) {
        if (parent[u] == u) return u;
        return parent[u] = find(parent[u]); // Path compression
    }

    void unite(int u, int v) {
        u = find(u);
        v = find(v);
        if (u == v) return;
        if (_size[u] < _size[v]) swap(u, v); // Union by size/rank
        parent[v] = u;
        _size[u] += _size[v];
    }
    
    int size(int u) {
        return _size[find(u)];
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;

    while (t--) {
        int n, q; 
        cin >> n >> q;
        vector<int> color(n), parent(n, -1), degree(n, 0);
        DSU dsu(n); 

        int deg1 = 0, deg2 = 0, numBlack = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> color[i];
            numBlack += color[i];
        }

        for (int i = 1; i < n; ++i) {
            int u, v; cin >> u >> v;
            --u, --v;
            parent[v] = u;
            degree[u]++; degree[v]++;
            if (color[u] && color[v]) dsu.unite(u, v);
        }

        for (int i = 0; i < n; ++i) {
            if (color[i]) {
                int deg = degree[i] - (parent[i] != -1 && color[parent[i]]);
                deg1 += (deg == 1);
                deg2 += (deg == 2);
            }
        }

        auto isChain = [&]() {
            return deg1 <= 2 && deg1 + deg2 == numBlack && (numBlack == 0 || dsu.size(0) == numBlack);
        };

        while (q--) {
            int u; cin >> u;
            u--;

            color[u] ^= 1;
            numBlack += (color[u] ? 1 : -1);

            for (int v : {u, parent[u]}) {
                if (v != -1) {
                    int deg = degree[v] - (parent[v] != -1 && color[parent[v]]);
                    deg1 -= (deg == 1 && color[v] ^ 1);
                    deg2 -= (deg == 2 && color[v] ^ 1);

                    if (color[v]) {
                        ++deg;
                        deg1 += (deg == 1);
                        deg2 += (deg == 2);
                        if (color[u] && u != v) {
                            dsu.unite(u, v);
                        }
                    }
                }
            }

            cout << (isChain() ? "Yes\n" : "No\n");
        }
    }

    return 0;
}
