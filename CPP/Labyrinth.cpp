/**
* author : jazzsterq
*/
#include <bits/stdc++.h>
#include <tuple>
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
    ll n,m;
    pair <ll,ll> start;
    cin>>n>>m;
    char a[n+2][m+2];ll visited[n+2][m+2];
    memset(a,'#',sizeof(a));
    memset(visited,0,sizeof(visited));
    forf(i,1,n+1){
        forf(j,1,m+1){cin>>a[i][j]; 
        if(a[i][j]=='A'){
            start=mp(i,j);
            visited[i][j]=1;
        }
        }
    }
    rep(i,n+2)
    {
        rep(j,m+2)
        if(a[i][j]=='#')visited[i][j]=1;
    }
    queue <tuple<ll,ll,string> > q;
    q.push(make_tuple(start.fi,start.se,""));
    while(!q.empty())
    {
        auto temp=q.front();
        q.pop();
        if(a[get<0>(temp)][get<1>(temp)]=='B')
        {
            cout<<"YES";ce;
            cout<<get<2>(temp).size();ce;
            cout<<get<2>(temp);return;
        }
        start=mp(get<0>(temp),get<1>(temp));
        ll up1=max(start.fi-1,0ll),up2=start.se;
        ll down1=min(start.fi+1,n),down2=start.se;
        ll left1=start.fi,left2=max(start.se-1,0ll);
        ll right1=start.fi,right2=min(start.se+1,m);
        if(!visited[up1][up2])
        {
            q.push(make_tuple(up1,up2,get<2>(temp)+'U'));
            visited[up1][up2]=1;
        }
        if(!visited[down1][down2])
        {
            q.push(make_tuple(down1,down2,get<2>(temp)+'D'));
            visited[down1][down2]=1;
        }
        if(!visited[left1][left2])
        {
            q.push(make_tuple(left1,left2,get<2>(temp)+'L'));
            visited[left1][left2]=1;
        }
        if(!visited[right1][right2])
        {
            q.push(make_tuple(right1,right2,get<2>(temp)+'R'));
            visited[right1][right2]=1;
        }
        
    }
    print("NO");
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

        solve();
    

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

void factorial(){
    fact[0]=1;
    for(ll i=1;i<MAXN+1;i++){
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