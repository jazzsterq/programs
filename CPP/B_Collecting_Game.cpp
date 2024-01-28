/**
* author : jazzsterq
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define be begin()
#define en end()
#define pb push_back
#define mp make_pair
#define pyes cout << "YES\n"
#define pno cout << "NO\n"
#define ce cout << '\n'
#define print(x) cout<<x<<endl
#define prints(x) cout<<x<<" "
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
#define MOD 1000000007

/*ll gcd(ll a, ll b) {if (!a || !b)return a | b;
unsigned shift = __builtin_ctz(a | b);
a >>= __builtin_ctz(a);
do {
b >>= __builtin_ctz(b);
if (a > b)
swap(a, b);
b -= a;
} while (b);
return a << shift;
}*/

void solve()
{
    ll n;
    cin>>n;
    vp a(n);
    rep(i,n)
    {
        cin>>a[i].fi;
        a[i].se=i;
    }
    sort(all(a));
    ll sum[n];
    ll suma=0;
    rep(i,n)
    {
        suma=suma+a[i].fi;
        sum[i]=suma;
    }
    ll ans[n];
    ll ans2[n];
    rep(i,n)
    {
        if(sum[i]>=a[i+1].fi)
        ans[i]=1;
        else
        ans[i]=0;
    }
    ll ans3[n];
    ll ansx=n-1;
    for(ll i=n-1;i>=0;i--)
    {
        if(ans[i]==0)
        {
            ansx=i;
            ans3[i]=i;
        }
        else
        ans3[i]=ansx;
    }
    rep(i,n)
    {
        if(ans[i]==0)
        {
            ans2[a[i].se]=i;
        }
        else
        {
            // ll start=i,end=n-1;
            // while(start+1<end)
            // {
            //     ll mid=start+(end-start)/2;
            //     if(ans[mid]==1)
            //     start=mid;
            //     else
            //     end=mid;
            // }
            // ans2[a[i].se]=end;
            ans2[a[i].se]=ans3[i];
        }
    }
    rep(i,n)
    cout<<ans2[i]<<" ";ce;


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