#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int MOD = 998244353;

long long modPow(long long base, int exp, int mod) {
    long long res = 1;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

void dfs(int node, vector<int>& visited, vector<vector<int>>& graph, int& size) {
    visited[node] = 1;
    size++;
    for (int next : graph[node]) {
        if (!visited[next]) {
            dfs(next, visited, graph, size);
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<int>> graph(k);
        vector<int> visited(k, 0);
        for (int i = 0; i < m; ++i) {
            char a, b;
            cin >> a >> b;
            graph[a - 'a'].push_back(b - 'a');
            graph[b - 'a'].push_back(a - 'a');
        }
        
        long long result = 0;
        for (int i = 0; i < k; ++i) {
            if (!visited[i]) {
                int size = 0;
                dfs(i, visited, graph, size);
                result = (result + modPow(size, n, MOD)) % MOD;
            }
        }
        
        cout << result << endl;
    }
    return 0;
}
