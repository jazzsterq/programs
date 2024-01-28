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
//5000*1000 , l ,r , u , d 

void solve()
{
    vector <string> v;
    v.pb("0010010");
    v.pb("1010101");
    v.pb("1111111");
    v.pb("0010000");
    v.pb("0000000");

    ll a[v.size()][v[0].size()][4];

    rep(i,v.size())
    {
        ll flag=0,pos;
        rep(j,v[i].size())
        {
            if((v[i][j]=='1')&&flag==0)
            {
                pos=j;
                flag=1;
            }
            if(v[i][j]=='1')
            {
                a[i][j][0]=pos;
            }
            if(v[i][j]=='0')
            {
                flag=0;
                a[i][j][0]=0;
            }
        }
    }
    rep(i,v.size())
    {
        rep(j,v[i].size())
        {
            prints(a[i][j][0]);
        }ce;
    }
    rep(i,v.size())
    {
        ll flag=0,pos;
        forb(j,v[i].size()-1,0)
        {
            if((v[i][j]=='1')&&flag==0)
            {
                pos=j;
                flag=1;
            }
            if(v[i][j]=='1')
            {
                a[i][j][1]=pos;
            }
            if(v[i][j]=='0')
            {
                flag=0;
            }
        }
    }
    rep(j,v[0].size())
    {
        rep(i,v.size())
        {
            ll flag=0,pos;
            if((v[i][j]=='1')&&flag==0)
            {
                pos=i;
                flag=1;
            }
            if(v[i][j]=='1')
            {
                a[i][j][2]=pos;
            }
            if(v[i][j]=='0')
            {
                flag=0;
            }
        }
    }
    rep(j,v[0].size())
    {
        forb(i,v.size()-1,0)
        {
            ll flag=0,pos;
            if((v[i][j]=='1')&&flag==0)
            {
                pos=i;
                flag=1;
            }
            if(v[i][j]=='1')
            {
                a[i][j][2]=pos;
            }
            if(v[i][j]=='0')
            {
                flag=0;
            }
        }
    }
    ll ans=0;
    rep(i,v.size())
    {
        rep(j,v[i].size())
        {
            if(v[i][j]=='1')
            {
            ll left=abs(j-a[i][j][0]);
            ll right = abs(a[i][j][1]-j);
            ll up=abs(a[i][j][2]-i);
            ll down=abs(a[i][j][3]-i);
            ll ans1=min(left,right);
            ll ans2=min(up,down);
            ans=min(ans,min(ans1,ans2));
            }
        }
    }
    cout<<ans;
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