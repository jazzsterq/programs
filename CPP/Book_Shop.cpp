/**
* author : jazzsterq
*/
#include <bits/stdc++.h>
using namespace std;
typedef int ll;
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
#define vp vector<pair<int,int> >
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
int dp[100001][1001];
int main(){
 
ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
ll n,x;
    cin>>n>>x;
    vp v(n);
    rep(i,n)cin>>v[i].fi;
    rep(i,n)cin>>v[i].se;
    sort(all(v));

    forf(i,1,x+1)
    {
        forf(j,1,n+1)
        {
            if((i-v[j-1].fi)>=0)
            dp[i][j]=max(dp[i][j-1],dp[i-v[j-1].fi][j-1]+v[j-1].se);
        }
    }
   
    cout<<dp[x][n];
 
return 0 ;
}
 
void build(ll ind,ll low,ll high)
{
    if(low==high)
    {
        seg[ind]=arr[low];
        return;
    }
    ll mid = (low +high)/2;
    build(2*ind+1,low,mid);
    build(2*ind+2,mid+1,high);
    seg[ind]=seg[2*ind+1]+seg[2*ind+2];
}
ll query(ll ind,ll low , ll high , ll l , ll r)
{
    if(low>=l&&high<=r)
    {
        return seg[ind];
    }
    if(high<l||low>r)
    {
        return 0;
    }
    ll mid = (low + high)/2;
    ll left= query(2*ind+1,low,mid,l,r);
    ll right= query(2*ind+2,mid+1,high,l,r);
    return(left+right);
 
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
