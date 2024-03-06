#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define be begin()
#define en end()
#define pb push_back
#define pyes cout << "YES\n"
#define pno cout << "NO\n"
#define ce cout << '\n'
#define endl '\n'
#define rev(v) reverse(v.begin(), v.end())
#define srt(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()
#define mnv(v) *min_element(v.begin(), v.end())
#define mxv(v) *max_element(v.begin(), v.end())
#define fi first
#define se second
#define deb(x) cout << #x << "=" << x << endl
#define vll vector<ll>
#define vp vector<pair<long long, long long> >
#define trav(v) for (auto it = v.begin(); it != v.end(); it++)
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)

void solve()
{
    ll n,m,d;cin>>n>>m>>d;
    ll num[n];
    ll b[n+1];
    b[0]=0;
    rep(i,n)
    {
        cin>>num[i];
        b[num[i]]=i+1;
    }
    ll a[m];ll ans=INT_MAX;
    rep(i,m)cin>>a[i];
    rep(i,m-1)
    {
       // cout<<b[a[i+1]]<<" "<<b[a[i]];ce;
        if(b[a[i+1]]<b[a[i]]||b[a[i+1]]>b[a[i]]+d)
        {ans=0;break;}
        ll g=(d-(b[a[i+1]]-b[a[i]])+1);
        if(n-b[a[i+1]]+b[a[i]]-1<g)g=INT_MAX;
        ans=min(ans,min((b[a[i+1]]-b[a[i]]),g));

    }
    cout<<ans;ce;
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
int t;
    cin >> t;
    while(t--){
        solve();
    }

return 0 ;
}