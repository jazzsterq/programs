#include <bits/stdc++.h>
using namespace std;

int findMinChanges(vector<int>& taskDependency) {
    int n = taskDependency.size();
    vector<bool> vis(n + 1, false);
    vector<int> cmp(n + 1, 0);
    int nc = 0;
    function<void(int)> dfs = [&](int nd) {
        vis[nd] = true;
        cmp[nd] = nc;
        int nxt = taskDependency[nd - 1];
        if(vis[nxt]&&nxt!=nd)nc++;
        if (!vis[nxt]) dfs(nxt);
    };
    for(int j=1;j<=n;j++)
    {
        
    }
    for (int i = 1; i <= n; ++i) {
        if (!vis[i]) {
            nc++;
            dfs(i);
        }
    }
   return nc - 1;
}

int main() {
    vector<int> taskDependency = {1,4,2,1};
    cout << "Minimum changes needed: " << findMinChanges(taskDependency) << endl;
    return 0;
}
