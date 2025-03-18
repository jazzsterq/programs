#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 100010001000100010
#include <vector>
#include <functional>
#include <iostream>




signed main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
    ll n,q;
    cin>>n>>q;
    ll t1,t2;
    vector<vector<pair<ll,ll>>> adj(n);
    for(ll i=1;i<n;i++)
    {
        cin>>t1>>t2;
        t1--;
        adj[i].push_back({t1,t2});
        adj[t1].push_back({i,t2});
    }
    vector<ll> isLeaf(n);
    vector<ll> dis(n,INF);
    vector<ll> till(n);
    dis[0]=0;
    ll count=0;
    function <void(ll,ll)> dfs= [&](ll node,ll parent){
        if(adj[node].size()==1){
            isLeaf[node]=1;
        }
        for(auto i: adj[node])
        {
            count=max(count,i.first);
            if(i.first==parent)continue;
            dis[i.first]=dis[node]+i.second;
            dfs(i.first,node);
        }
        till[node]=count;
        
    };
    dfs(0,-1);
    for(ll i=0;i<n;i++){
        if(isLeaf[i]==0)dis[i]=INF;
    }
    SegmentTree <ll> seg(dis,[](ll a,ll b){return min(a,b);},0);
    map <ll,vector<vector<ll>>>query;
    for(ll i=0;i<q;i++)
    {
        ll nd, le, r;
        cin>>nd>>le>>r;
        nd--;le--;r--;
        vector<ll> v(3);
        v[0]=le;v[1]=r;v[2]=i;
        query[nd].push_back(v);
    }   
    vector<ll> ans(q);
    function <void(ll,ll)> dfs2=[&](ll node,ll parent){
        for(auto i:query[node]){
            //cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
            ans[i[2]]=seg.query_range(i[0],i[1]);
        }
        for(auto i:adj[node]){
            if(i.first==parent)continue;
            seg.update_range(i.first,till[i.first],-i.second);
            seg.update_range(0,i.first-1,i.second);
            seg.update_range(till[i.first]+1,n-1,i.second);
            dfs2(i.first,node);
            seg.update_range(i.first,till[i.first],i.second);
            seg.update_range(0,i.first-1,-i.second);
            seg.update_range(till[i.first]+1,n-1,-i.second);
        }

    };
    dfs2(0,-1);
    for(ll i=0;i<q;i++)cout<<ans[i]<<endl;
}
