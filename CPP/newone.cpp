#include <bits/stdc++.h>
using namespace std;


int solve (int N, vector<int> Passengers, vector<vector<int> > Edges) {

vector<vector<int>> adj(N + 1);

int y;

for(int i=0;i<Passengers.size();i++){
    y = Passengers[i];
}

for(int i = 0; i < Edges.size(); i++){
    int u = Edges[i][0], v = Edges[i][1];
    adj[u].push_back(v);
    adj[v].push_back(u);
    // cout<<u<<" "<<v<<endl;
}

vector<int> dp(N + 1, 0);

function<void(int, int)> dfs = [&](int node, int par){
    int chk=0;
    for(int child : adj[node]){
        if(child == par) continue;
        dfs(child, node);
        dp[node] += dp[child] ;
        if(Passengers[child]&&dp[child]==0)chk=1;
    }
    dp[node]+=chk;
};

dfs(1, -1);

int ans = dp[1];

return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<vector<int>> edg;
    for(int i=0;i<n-1;i++)
    {
        int a,b;cin>>a>>b;
        edg.push_back({a,b});
    }
    cout<<solve(n,v,edg);
}
