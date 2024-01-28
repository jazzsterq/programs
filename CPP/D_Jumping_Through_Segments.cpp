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
vp seg;
ll n;
bool check(ll k)
{
    ll mins=0,maxs=0;
    rep(i,n)
    {
        //cout<<mins<<" "<<maxs<<" "<<k;ce;
        if(maxs+k<seg[i].fi||mins-k>seg[i].se)
        return 0;
        else
        {
            mins=max(seg[i].fi,mins-k);
            maxs=min(seg[i].se,maxs+k);
        }

    }
    return 1;
}
void solve()
{
    cin>>n;
    seg.resize(n);
    rep(i,n)
    {cin>>seg[i].fi>>seg[i].se;
    }
    ll left=-1,right=1e9;
    while(left+1<right)
    {
        ll mid=left+(right-left)/2;
        if(check(mid)==1)
        right=mid;
        else
        left=mid;
    }
    cout<<right;ce;
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