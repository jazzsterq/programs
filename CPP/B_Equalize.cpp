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
#define fi first
#define se second
#define pyes cout << "YES\n"
#define pno cout << "NO\n"
#define print(x) cout<<x<<endl
#define prints(x) cout<<x<<" "
#define ce cout << '\n'
#define endl '\n'
#define rev(v) reverse(v.begin(), v.end())
#define srt(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()
#define mnv(v) *min_element(v.begin(), v.end())
#define mxv(v) *max_element(v.begin(), v.end())
#define deb(x) cout << #x << "=" << x << endl
#define vll vector<ll>
#define vp vector<pair<long long, long long> >
#define trav(v) for (auto it = v.begin(); it != v.end(); it++)
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)

const ll MAXN=100001;
const ll MODN= 1e9 + 7;
bool is_prime[MAXN+1];
ll fact[MAXN+1];
ll arr[200005];
ll spf[MAXN];
ll seg[4*200005];
void sieve();
ll exp(ll x, ll y , ll p );
ll gcd(ll a, ll b);
void sieve_of_eratosthenes( );
void factorial();
void build(ll ind,ll low,ll high);
ll query( ll ind,ll low , ll high , ll l , ll r);
void solve()
{
    ll n;
    cin>>n;
    vll a;
    set <ll> s;
    rep(i,n)
    {
        ll temp;
        cin>>temp;
        s.insert(temp);
    }
    for(auto i: s)a.pb(i);
    sort(a.rbegin(),a.rend());
    vll diff;
    rep(i,a.size()-1)
    {
        diff.pb(a[i]-a[i+1]);
    }
    vll presum;
    presum.pb(1);
    ll sum=1;
    rep(i,a.size()-1)
    {
        sum+=diff[i];
        presum.pb(sum);
    }
    ll start=0,end=0;
    ll count=0;
 
    while(start<a.size())
    {
        if(presum[end]-presum[start]+1<=n)
        {
            count=max(count,end-start+1);
            if(end==a.size()-1)
            break;
            end++;
        }
        else
        {
            start++;
        }
    }
    print(count);
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
ll t;
    cin >> t;
    while(t--){
        solve();
    }

return 0 ;
}

