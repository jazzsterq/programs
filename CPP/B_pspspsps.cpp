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
#define print(x) cout << x << endl
#define prints(x) cout << x << " "
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
#define vp vector<pair<long long, long long>>
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

template <typename R>
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

const ll MAXN = 100001;
const ll MODN = 1e9 + 7;
bool is_prime[MAXN + 1];
ll fact[MAXN + 1];
ll arr[200005];
ll spf[MAXN];
void sieve();
ll exp(ll x, ll y, ll p);
ll nCr(ll n, ll r);
ll gcd(ll a, ll b);
void sieve_of_eratosthenes();
void factorial();

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll flag = 0, flag2 = 0;
    vll m(n), mm(n);
    rep(i, n)
    {
        m[i] = i + 1;
        mm[i] = i + 1;
    }
    reverse(all(mm));
    function<ll(ll, ll)> nisPerm = [&](ll a, ll b)
    {
        set<ll> ss;
        forf(i, a, b)
        {
            ss.insert(m[i]);
        }
        ll j = 1;
        for (auto i : ss)
        {
            if (i != j)
                return 1;
            j++;
        }
        return 0;
    };
    function<ll(ll, ll)> nisPermm = [&](ll a, ll b)
    {
        set<ll> ss;
        forf(i, a, b)
        {
            ss.insert(mm[i]);
            // cout<<i<<" ";
        } // ce;
        ll j = 1;
        for (auto i : ss)
        {
            // cout << i << " ";
            if (i != j)
                return 1;
            j++;
        }
        // ce;
        return 0;
    };
    rep(i, n)
    {
        if (s[i] == 'p')
        {
            flag = max(flag, nisPerm(0, i + 1));
            flag2 = max(flag2, nisPermm(0, i + 1));
        }
        else if (s[i] == 's')
        {
            flag = max(flag, nisPerm(i, n));
            flag2 = max(flag2, nisPermm(i, n));
        }
        // cout << flag2 << " ";
    }
    // ce;
    //  cout<<flag<<" "<<flag2<<endl;
    if (flag == 0 || flag2 == 0)
    {
        print("YES");
    }
    else
        print("NO");
    return;
}
/*    ll flag=0,count=0,count2=0;
    rep(i,n){
        if(s[i]=='p'){flag=1;
        count++;
        }
        if(s[i]=='s')count2++;
        if(flag==1&&s[i]=='s'){
            print("NO");return;
        }
    }

    if(count==0||count==n||((count2==1||count==1)&&s[n-1]=='p'))print("YES");
    else print("NO");*/
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

ll gcd(ll a, ll b)
{
    if (!a || !b)
        return a | b;
    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do
    {
        b >>= __builtin_ctz(b);
        if (a > b)
            swap(a, b);
        b -= a;
    } while (b);
    return a << shift;
}

void factorial()
{
    fact[0] = 1;
    for (ll i = 1; i < MAXN + 1; i++)
    {
        fact[i] = (fact[i - 1] * i) % MODN;
    }
}

ll nCr(ll n, ll r)
{
    return (fact[n] * exp((fact[n - r] * fact[r]) % MODN, MODN - 2, MODN)) % MODN;
}

ll exp(ll a, ll b, ll p)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res % p * a % p) % p;
        a = ((a % p) * (a % p)) % p;
        b >>= 1;
    }
    return res % p;
}

void sieve_of_eratosthenes()
{
    memset(is_prime, true, sizeof(is_prime));
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i <= MAXN; i++)
    {
        if (is_prime[i] && (long long)i * i <= MAXN)
        {
            for (ll j = i * i; j <= MAXN; j += i)
            {
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

    for (ll i = 3; i * i < MAXN; i++)
    {
        // checking if i is prime
        if (spf[i] == i)
        {
            // marking SPF for all numbers divisible by i
            for (ll j = i * i; j < MAXN; j += i)

                // marking spf[j] if it is not
                // previously marked
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}