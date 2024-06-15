#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
 
const int MAXN = 2e5 + 10;
 
vector<int> adj[MAXN];
vector <int> sizeee(MAXN);
int sod[MAXN];
vector<int> ansv;
int msod = INT_MAX;
void dfs(int node, int parent) {
    sizeee[node] = 1;
    sod[node] = 0;
 
    for (int child : adj[node]) {
        if (child != parent) {
            dfs(child, node);
            sizeee[node] += sizeee[child];
            sod[node] += (sod[child] + sizeee[child]);
        }
    }
}
void dfs2(int node, int parent, int psod, int N) {
    int csod = sod[node] + psod + (N - sizeee[node]);
    if (csod < msod) {
        msod = csod;
        ansv.clear();
        ansv.push_back(node);
    } else if (csod == msod) {
        ansv.push_back(node);
    }
 
    for (int child : adj[node]) {
        if (child != parent) {
            int npsod = csod - (sod[child] + sizeee[child]);
            dfs2(child, node, npsod, N);
        }
    }
}
 
int main() {
    int N;
 
    cin >> N;
 
 
    for (int i = 0; i < N - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int root=1;
    while(adj[root].size()==1)root++;
    dfs(root, -1);
 
 
    dfs2(root, -1, 0, N);
 
 
    cout << ansv.size() << endl;
 
    sort(ansv.begin(), ansv.end());
 
    for (int vertex : ansv) {
        cout<< vertex;
    }
    cout << endl;
 
    return 0;
}