/**
   author : jazzsterq
  ⠀⠀⠀⠐⢀⣠⣤⣴⣶⣶⣦⣤⣀⣤⣤⣤⠀⠀⠀⠀⠀⠀⠀⠀
  ⠀⠙⢁⣴⠿⣿⣉⣿⣿⠿⠿⣿⣿⣿⣏⢻⠀⠀⠀⠀⠀⠀⠀⠀
  ⠀⢰⣿⡿⢸⣿⣿⣿⣿⣄⣠⣿⣿⣿⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀
  ⢀⣿⣿⣷⣾⣿⣿⣿⣿⠋⠉⣿⣿⣏⢙⣿⣧⠀⠀⠀⠀⠀⠀⠀
  ⢸⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀
  ⠈⣿⣿⣿⡟⠀⠀⢈⣿⠀⠀⣿⣿⡿⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀
  ⠀⠘⣿⣿⣇⠀⠙⠛⠋⠀⢀⣿⡿⢰⣿⡿⠁⠀⠀⠀⠀⠀⠀⠀
  ⠀⠂⠈⠻⣿⣷⣤⣤⣤⣴⣿⣿⣷⡾⠋⠀⠘⠀⠀⠀⠀⠀⠀⠀
  ⠀⠀⠀⠀⠀⠉⠛⠛⠿⠿⠛⠋⠉⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
*/
#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#ifdef __x86_64__
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
#endif
using namespace std;
typedef long long ll;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> indexed_multiset;
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
#define vvll vector<vector<ll>>
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

const ll MAXN=100001;
const ll MODN= 1e9 + 7;
bool is_prime[MAXN+1];
ll fact[MAXN+1];
ll arr[200005];
ll spf[MAXN];
void sieve();
ll exp(ll x, ll y , ll p );
ll gcd(ll a, ll b);
ll nCr(ll n, ll r);
void sieve_of_eratosthenes( );
void factorial();
void build(ll ind,ll low,ll high);
ll query( ll ind,ll low , ll high , ll l , ll r);

void solve()
{
     int t = 1;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vll numbers(n);
        rep(i, n) cin >> numbers[i];
        
        set<pair<ll, pair<ll, ll>>> spaceSet;
        vector<ll> indices(n + 1);
        
        rep(i, n) indices[numbers[i]] = i;
        
        bool validSequence = true;
        if (n == 1) {
            pyes; ce;
            continue;
        }
        
        if (!((indices[1] == 0 || indices[1] == n - 1) && 
              (indices[2] == 0 || indices[2] == n - 1))) {
            validSequence = false;
        } else {
            spaceSet.insert({(n - 3) / 2, {min(indices[1], indices[2]), max(indices[1], indices[2])}});
        }
        
        set<ll> insertedPositions;
        insertedPositions.insert(indices[2]);
        insertedPositions.insert(indices[1]);
        
        if (validSequence) {
            for (int i = 3; i <= n; i++) {
                auto rightIt = insertedPositions.lower_bound(indices[i]);
                auto leftIt = prev(rightIt);
                ll leftPos = *leftIt;
                ll rightPos = *rightIt;
                ll distance = rightPos - leftPos - 1;
                ll value = (distance - 1) / 2;
                
                if (!spaceSet.count({value, {leftPos, rightPos}})) {
                    validSequence = false;
                    break;
                }
                auto lastSpace = *prev(spaceSet.end());
                if (lastSpace.first != value) {
                    validSequence = false;
                    break;
                }
                
                pair<ll, pair<ll, ll>> spaceRecord = {value, {leftPos, rightPos}};
                ll l = spaceRecord.second.fi + 1;
                ll r = spaceRecord.second.se - 1;
                ll mid = (l + r) / 2;
                
                spaceSet.erase(spaceRecord);
                if ((l + r) % 2 && indices[i] == mid + 1) mid++;
                if (indices[i] != mid) {
                    validSequence = false;
                    break;
                }
                
                insertedPositions.insert(mid);
                if (spaceRecord.second.fi + 1 < mid) {
                    ll newVal = ((mid - spaceRecord.second.fi - 1) - 1) / 2;
                    spaceSet.insert({newVal, {spaceRecord.second.fi, mid}});
                }
                if (mid + 1 < spaceRecord.second.se) {
                    ll newVal = ((spaceRecord.second.se - mid - 1) - 1) / 2;
                    spaceSet.insert({newVal, {mid, spaceRecord.second.se}});
                }
            }
        }
        
        if (validSequence) pyes; else pno;
    }

    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
        solve();

return 0 ;
}

ll gcd(ll a, ll b) {if (!a || !b)return a | b;
unsigned shift = __builtin_ctz(a | b);
a >>= __builtin_ctz(a);
do {
b >>= __builtin_ctz(b);
if (a > b)
swap(a, b);
b -= a;
} while (b);
return a << shift;
}

void factorial(){
    fact[0]=1;
    for(ll i=1;i<MAXN+1;i++){
        fact[i]=(fact[i-1]*i)%MODN;
    }
}

ll nCr(ll n, ll r){
return (fact[n]*exp((fact[n - r] * fact[r]) % MODN,MODN-2,MODN))%MODN;
}

ll exp(ll a, ll b , ll p)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res%p * a%p)%p ;
        a = ((a%p) * (a%p))%p;
        b >>= 1;
    }
    return res%p;
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