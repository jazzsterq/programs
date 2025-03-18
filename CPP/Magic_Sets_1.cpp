#include <bits/stdc++.h>

#define ll long long 
#define mod 1000000007
#define pb push_back
#define F first
#define S second
#define all(v) v.begin(), v.end()
#define vi vector <ll>
#define vpi vector <pair<ll, ll>>
#define pp pair<ll, ll>
#define yo cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
#define slowbit ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

ll n;
vector<vi> g;
ll sz[4010];
string s;

void dfs(ll node, ll p){
    sz[node] = 1;
    for(auto child: g[node]){
        if(child != p){
            dfs(child, node);
            sz[node] += sz[child];
        }
    }
}

int main(){
    slowbit
    cin>>n;
    g.resize(n+1);
    for(int i = 0; i<n-1; i++){
        ll a, b; cin>>a>>b;
        g[a].pb(b); g[b].pb(a);
    }
    cin>>s;
    
    // Perform a single DFS to calculate subtree sizes
    dfs(1, -1);
    
    ll red = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == 'R') red++;
    }
    
    if(red % 2 == 0){
        for(int i = 0; i<n; i++) cout<<n<<endl;
    }
    else{
        ll mnsz = INT_MAX;
        for(int i = 1; i<=n; i++){
            if(s[i-1] == 'R'){
                mnsz = min(mnsz, sz[i]);
            }
        }
        for(int i = 1; i<=n; i++){
            cout<<n - mnsz<<endl;
        }
    }
}
