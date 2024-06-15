/**
* author : jazzsterq
*/
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define be begin()
#define en end()
#define pb push_back
#define mp make_pair
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
    ll a,b;
    unsigned long long c;
    cin>>a>>b>>c;
    bitset<60> th(c);
    bitset<60> fi(0);
    bitset<60> se(0);
    ll num=th.count();
    ll diff=abs((int)a-(int)b);
    if((diff>num && diff%2!=num%2)||(a+b)<num)
    {
       print(-1);return;
    }
    ll c1=(num+diff)/2;
    ll c2=(num-diff)/2;
    ll c11,c22;
    if(a>b){
        c11=max(c1,c2);
        c22=min(c1,c2);
    }
    else
    {
        c11=min(c1,c2);
        c22=max(c1,c2);
    }
    ll countt=a-c11;
    rep(i,60)
    {
        if(th[i]==1)
        {
            if(c11>0)
            {
                fi[i]=1;c11--;
            }
            else if(c11==0)
            se[i]=1;
        }
        else
        {
            if(countt>0)
            {
                fi[i]=1;se[i]=1;countt--;
            }
        }
    }
    prints(fi.to_ullong());
    prints(se.to_ullong());ce;
    //cout<<(fi.to_ullong()^se.to_ullong());
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
        solve();

return 0 ;
}

