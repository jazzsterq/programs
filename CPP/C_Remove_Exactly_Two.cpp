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
#define vp vector<pair<ll, ll> >
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
    for (ll i = 0; i < (ll)a.size(); i++)
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
ll nCr(ll n, ll r);
ll gcd(ll a, ll b);
void sieve_of_eratosthenes( );
void factorial();

void solve()
{
    ll n; 
    cin >> n;

    vvll adj(n+1);
    vll deg(n+1, 0);

    rep(i,n-1){
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        deg[u]++;
        deg[v]++;
    }
    vp bd;
    for(ll v = 1; v <= n; v++){
        bd.push_back({deg[v], v});
    }
    sort(bd.rbegin(),bd.rend());
    ll limit = min(n, 200ll);
    vll cand; 
    rep(i,limit)
        cand.push_back(bd[i].second);

    set<ll> ass[limit];
    for(ll i = 0; i < (ll)cand.size(); i++){
        ll v = cand[i];

        for(ll nbr : adj[v]) {
            ass[i].insert(nbr);
        }
    }


    ll bc = 0; 
    ll sz = (ll)cand.size();
    rep(i,sz){
        ll v1 = cand[i];
        for(ll j = 1; j <=n; j++){
            if(j==v1)continue;

            bool isne = (ass[i].count(j) > 0);
            ll curr = (ll)deg[v1] + deg[j] - (isne ? 1 : 0);
            bc = max(bc, curr);
        }
    }

    ll ans = bc - 1;

    cout << ans << "\n";
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
