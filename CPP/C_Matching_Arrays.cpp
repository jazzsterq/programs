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
    ll n,x;cin>>n>>x;
    vp a(n);vll b(n);
    ll f[n];
    rep(i,n)
    {
        cin>>a[i].first;
        a[i].second=i;
    }
    rep(i,n)
    cin>>b[i];
    sort(all(b));
    sort(all(a));
    ll i=-1;
    rep(ans,n)
    {
        if(a[ans]>b[0])
        {i=ans;break;}
    }ll count=0;
    if(i==-1)
    for(;i<n&&count<x;i++,count++)
    {
        if(a[i].first>b[count])
        f[a[i].second]=b[count];
        else
        {
            cout<<"NO";ce;return;
        }
    }
    rep(i,n-x)
    {
        if(a[i].first>b[i+x])
        {
             cout<<"NO";ce;return;
        }
        else
        f[a[i].second]=b[i+x];
    }
        cout<<"YES";ce;
        rep(i,n)
        cout<<f[i]<<" ";ce;

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