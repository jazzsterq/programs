/**
* author : jazzsterq
*/
#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
using namespace std;
typedef long long ll;
//#include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
// typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> indexed_multiset;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define INF 1000000000000000000
#define sz(x) static_cast<ll>((x).size())
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
#define pp pair<ll, ll>
#define trav(v) for (auto it = v.begin(); it != v.end(); it++)
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)

#ifndef ONLINE_JUDGE
#include "debug.cpp"
#define debug(x...)               \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define debug(x...)
#endif

template<typename R>
void vin(vector<R> &a)
{
    for (ll i = 0; i < (ll)a.size(); i++)
    {
        cin >> a[i];
    }
}
 
template <typename T>
void vout(vector<T> a)
{
    for (int i = 0; i < (int)a.size(); i++)
    {
        cout << a[i] << " ";
    }
    ce;
}

const ll MAXN=1000001;
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
ll sumprime[MAXN+1];
void solve()
{
    ll n;
    cin>>n;
    //prints(spf[n]);ce;
    ll ans=0;
    ans=n*sumprime[spf[n]];
    print(ans);
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
ll t;
sieve();
sieve_of_eratosthenes();
ll sum=0;
rep(i,MAXN+1)
{
    if(is_prime[i])sum+=i;
    sumprime[i]=sum;
}
    cin >> t;
    while(t--){
        solve();
    }

return 0 ;
}

void sieve_of_eratosthenes(){
    memset(is_prime,true,sizeof(is_prime));
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i <= MAXN; i++) {
            if (is_prime[i] && (long long)i * i <= MAXN) {
                for (ll j = i * i; j <= MAXN; j += i){
                        is_prime[j] = false;
                }
        }
    }
 
}

void sieve()
{
    spf[1] = 1;
    for (ll i = 2; i < MAXN; i++)
 
        // marking smallest prime factor for every
        // number to be itself.
        spf[i] = i;
 
    // separately marking spf for every even
    // number as 2
    for (ll i = 4; i < MAXN; i += 2)
        spf[i] = 2;
 
    for (ll i = 3; i * i < MAXN; i++) {
        // checking if i is prime
        if (spf[i] == i) {
            // marking SPF for all numbers divisible by i
            for (ll j = i * i; j < MAXN; j += i)
 
                // marking spf[j] if it is not
                // previously marked
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}