#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<pair<int,int>> edge_list(m);
    vector<int> salaries(n);
    vector<vector<int>  > adj(n);
    for(int i=0;i<m;i++)
    {
        adj[edge_list[i].first].push_back(edge_list[i].second);
        adj[edge_list[i].second].push_back(edge_list[i].first);
    }
    int count=0;
    function <pair<int,int>(int,int)> dfs=[&](int node,int parent){
        int ans=0,count=0;
        for(auto i: adj[node])
        {
            if(i!=parent)
            {
                count++;
                ans+=salaries[i];
                auto[one,two]=dfs(i,node);
                count+=one;
                ans+=two;
            }
        }
        if(ans/count>salaries[node])count++;
        return make_pair(count,ans);
    };
    dfs(0,-1);
    cout<<count;
}
