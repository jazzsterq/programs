#include<bits/stdc++.h>
#define ll long long
#define in int64_t
#define pYes cout<<"Yes"<<endl;
#define pYES cout<<"YES"<<endl;
#define pNo cout<<"No"<<endl;
#define pNO cout<<"NO"<<endl;
#define f(i,a,b) for(long long i=a;i<b;i++)
#define fe(i,a,b) for(long long i=a;i<=b;i++)
#define ff(i,a,b) for(long long i=b-1;i>a;i--)
#define ffe(i,a,b) for(long long i=b-1;i>=a;i--)
#define pb push_back
#define pp pop_back
#define umap unordered_map 
#define mod 1000000007
#define fi first
#define se second
using namespace std;
ll dfs(ll n,ll root,vector<vector<ll>>&adj,vector<bool>&vis,vector<pair<ll,ll>>&maxchild,vector<ll>&parent){
  vis[root]=true;
  ll child=0;
  for(auto nbr:adj[root]){
    if(!vis[nbr]){
      parent[nbr]=root;
      ll dep=dfs(n,nbr,adj,vis,maxchild,parent);
      child+=dep+1;
      maxchild[root].fi=max(maxchild[root].fi,dep+1);
      if(maxchild[root].fi==dep+1)
      maxchild[root].se=nbr;
    }
  }
  ll temp=maxchild[root].fi;
    maxchild[root].fi=max(maxchild[root].fi,n-1-child);
    if(maxchild[root].fi==n-1-child)
    maxchild[root].se=parent[root];
    return temp;
  
  return 0;
}
void track(ll root,vector<vector<ll>>&adj,vector<bool>&visi,set<ll>&maxi,vector<ll>&lvl){
    maxi.insert(root);
    visi[root]=true;
    for(auto nbr:adj[root]){
        if(!visi[nbr]){
            lvl[nbr]=lvl[root]+1;
            track(nbr,adj,visi,maxi,lvl);
        }
    }
    return;
}
int main() {
  ll n;
  cin>>n;
  vector<vector<ll>>adj(n+1);
  f(i,0,n-1){
    ll x,y;
    cin>>x>>y;
    adj[x].pb(y);
    adj[y].pb(x);
  }
  string s;
  cin>>s;
  ll red=0;
  f(i,0,n){
    if(s[i]=='R'){
        red++;
    }
  }
  if(red%2==0){
    f(i,0,n){
        cout<<n<<endl;
    }
  }
  else{
    vector<bool>vis(n+1,false);
    vector<pair<ll,ll>>maxchild(n+1,{0,0});
    vector<ll>parent(n+1,0);
    dfs(n,1,adj,vis,maxchild,parent);
    ll ans=0;
    ll root=0;
    fe(i,1,n){
        if(s[i-1]=='R'){
            ans=max(ans,maxchild[i].fi);
            if(ans==maxchild[i].fi)
            root=i;
        }
    }
    vector<ll>lvl(n+1,0);
    set<ll>maxi;
    vector<bool>visi(n+1,false);
    visi[root]=true;
    track(maxchild[root].se,adj,visi,maxi,lvl);
    ll answer=0;
    fe(i,1,n){
        if(s[i-1]=='R'){
            if(lvl[i]>answer&&maxi.find(i)!=maxi.end()){
                answer=lvl[i];
            }
        }
    }
    fe(i,1,n){
        if(maxi.find(i)!=maxi.end()){
            cout<<maxchild[root].fi<<endl;
        }
        else{
            cout<<n-maxchild[root].fi+answer<<endl;
        }
    }
  }
  
return 0;
}