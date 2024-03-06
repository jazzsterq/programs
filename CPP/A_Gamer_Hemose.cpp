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
    ll n,h;cin>>n>>h;
    ll a[n];
    rep(i,n)
    {
        cin>>a[i];

    }
    sort(a,a+n,greater <int>());
    ll n1=a[0],n2=a[1];
    ll ans = h/(n1+n2);
    // if(ans==1)
    // {
    //     if(h<=n1)
    //     ans=1;
    //     else ans=2;
    // }
   // else
    {
      
        if(h%(n1+n2)>0)
        {
            if(h-(ans*(n1+n2))>n1)
            {
                ans*=2;ans++;ans++;
            }
            else
            {
                ans*=2;ans++;
            }

        }else ans*=2;
    }cout<<ans;ce;
    // rep(i,n)
    // {
    //     h-=a[i];
    //     if(h<=0)
    //     {
    //         cout<<i+1;ce;
    //         return;
    //     }
    //     if(i==n-1)
    //     {
    //         if(h<=0)
    //         {

    //         }
    //         else
    //     }
    // }
    // cout<<n;ce;

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