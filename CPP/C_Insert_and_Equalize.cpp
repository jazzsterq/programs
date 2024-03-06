#include <bits/stdc++.h>
#include <algorithm>
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
ll gcd(ll a, ll b) 
{ 
  if (a == 0) 
    return b; 
  return gcd(b % a, a); 
} 
void solve()
{
    ll n;cin>>n;
    vector <ll> a;
    rep(i,n)
    {
        ll temp;
        cin>>temp;
        a.pb(temp);
    }
    sort(a.begin(),a.end());
    ll result=a[1]-a[0];
    rep(i,n-1)
    {
        ll diff=a[i+1]-a[i];
        result=gcd(diff,result);
        //cout<<diff<<" "<<result<<endl;
    }
    ll maxa=a[n-1];ll flag=0;
    for(ll i=n-1;i>0;i--)
    {
        if(a[i]-result!=a[i-1])
        {
            flag=1;
            a.pb(a[i]-result);
        }
    }

    if(flag==0)
    {
        a.pb(maxa+result);
        maxa=maxa+result;
    }
    ll ans=0;
    rep(i,n+1)
    {
        ll diff=maxa-a[i];
        ans+=diff/result;
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