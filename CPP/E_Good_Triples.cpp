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

const ll MAXN=1000001;
const ll MODN= 1e9 + 7;
bool is_prime[MAXN+1];
ll fact[MAXN+1];
int spf[MAXN];
void sieve();
ll exp(ll x, ll y , ll p );
ll gcd(ll a, ll b);
void sieve_of_eratosthenes( );
void factorial();
vll countt(10);
void solve()
{
    ll n;
    cin>>n;ll ans=1;
    while(n>0)
    {
        ll dig=n%10;
        ans*=countt[dig];
        n=n/10;
    }
    print(ans);
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
rep(p,10)
{
    ll temp=0;
    rep(i,p+1)
        {
            rep(j,p+1)
            {
                rep(k,p+1)
                {
                    if(i+j+k==p)
                    temp++;
                }
            }
        }
        countt[p]=temp;
}
int t;
    cin >> t;
    while(t--){
        solve();
    }

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
    for(int i=1;i<MAXN+1;i++){
        fact[i]=(fact[i-1]*i)%MODN;
    }
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
    for (int i = 2; i <= MAXN; i++) {
            if (is_prime[i] && (long long)i * i <= MAXN) {
                for (int j = i * i; j <= MAXN; j += i){
                        is_prime[j] = false;
                }
        }
    }
 
}

void sieve()
{
    spf[1] = 1;
    for (int i = 2; i < MAXN; i++)
 
        // marking smallest prime factor for every
        // number to be itself.
        spf[i] = i;
 
    // separately marking spf for every even
    // number as 2
    for (int i = 4; i < MAXN; i += 2)
        spf[i] = 2;
 
    for (int i = 3; i * i < MAXN; i++) {
        // checking if i is prime
        if (spf[i] == i) {
            // marking SPF for all numbers divisible by i
            for (int j = i * i; j < MAXN; j += i)
 
                // marking spf[j] if it is not
                // previously marked
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}