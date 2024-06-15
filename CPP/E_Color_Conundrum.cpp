#include <bits/stdc++.h>
using namespace std;

vector<int> adj[200005];
int color[200005];
vector<int> euler;
int first[200005], last[200005];
unordered_map<int, int> colorCount[200005];
int n, q;

void dfs(int v, int p = -1) {
    first[v] = euler.size();
    euler.push_back(v);
    for (auto u : adj[v]) {
        if (u == p) continue;
        dfs(u, v);
    }
    last[v] = euler.size();
    euler.push_back(v); 
}

void solve() {
    cin >> n >> q;
    for (int i = 1; i <= n; ++i) adj[i].clear();
    euler.clear();

    for (int i = 1; i <= n; ++i) cin >> color[i];

    for (int i = 1; i < n; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1); 
    for (int i = 0; i < euler.size(); ++i) {
        colorCount[euler[i]][color[euler[i]]]++;
    }

    while (q--) {
        int type, v, x;
        cin >> type >> v >> x;
        if (type == 1) {
           
            colorCount[v][color[v]]--;
            color[v] = x;
            colorCount[v][color[v]]++;
        } else if (type == 2) {
           
            int cnt = 0;
            for (int i = first[v]; i <= last[v]; ++i) {
                if (color[euler[i]] == x) cnt++;
            }
            cout << cnt / 2 << "\n"; 
             }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
