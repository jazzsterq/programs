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
ll seg[4*200005];
void sieve();
ll exp(ll x, ll y , ll p );
ll gcd(ll a, ll b);
void sieve_of_eratosthenes( );
void factorial();
void build(ll ind,ll low,ll high);
ll query( ll ind,ll low , ll high , ll l , ll r);
ll calculateBeauty(const vector<ll>& P) {
    ll beauty = 0;
    vector<bool> seen(P.size() + 1, false);
    ll minRequired = 1;

    for (ll i = 0; i < P.size(); i++) {
        seen[P[i]] = true;
        while (minRequired <= i + 1 && seen[minRequired]) {
            minRequired++;
        }
        if (minRequired > i + 1) {
            beauty++;
        }
    }
    return beauty;
}
ll applySwapAndCalculateBeauty(vector<ll> P, ll L, ll R) {
    for (ll i = L; i < R; i += 2) {
        swap(P[i], P[i + 1]);
    }
    return calculateBeauty(P);
}

ll findMaxBeauty(vector<ll>& P) {
    ll n = P.size();
    ll originalBeauty = calculateBeauty(P);
    ll maxBeauty = originalBeauty;

    for (ll L = 0; L < n; L++) {
        for (ll R = L + 1; R < n; R++) {
            if ((R - L + 1) % 2 == 0 && (L % 2 != R % 2)) { 
                ll beautyAfterSwap = applySwapAndCalculateBeauty(P, L, R);
                maxBeauty = max(maxBeauty, beautyAfterSwap);
            }
        }
    }

    return maxBeauty;
}
void solve(ll n,vll a)
{
    //ll n;
    //cin>>n;vll a(n);vin(a);
    vll ans(n);
    rep(i,n-1)
    {
       if(a[i]>a[i+1])ans[i]=1;
    }
    vll odd,even;
    rep(i,n-1)
    {
        if(i%2)even.pb(ans[i]);
        else odd.pb(ans[i]);
    }
    vll profit;
    ll temp=0;
    set<ll> s;
    rep(i,odd.size())
    {
        if(odd[i])
        {
            s.insert(a[2*i+1]);
            if(*s.begin()==1&&*s.rbegin()==2*i+1)
            temp++;
            s.insert(a[2*i]);
            //if(*s.begin()==1&&*s.rbegin()==2*i+2)
            //temp++;
        }
        else
        {
           ll count=0;
           s.insert(a[2*i]); 
           if(*s.begin()==1&&*s.rbegin()==2*i+1)
           count++;
            if(count!=0)
            {
                profit.pb(temp);
                temp=0; 
                
            }
            s.insert(a[2*i+1]);
        }
    }
    profit.pb(temp);
    temp=0;
    s.clear();
    s.insert(a[0]);
    //vout(odd);
    //vout(profit);
    rep(i,even.size())
    {
        if(even[i])
        {
            s.insert(a[2*i+2]);
            if(*s.begin()==1&&*s.rbegin()==2*i+2)
            temp++;
            s.insert(a[2*i+1]);
            //if(*s.begin()==1&&*s.rbegin()==2*i+3)
            //temp++;
        }
        else
        {
           ll count=0;
           s.insert(a[2*i+1]); 
           if(*s.begin()==1&&*s.rbegin()==2*i+2)
           count++;
            if(count!=0)
            {
                profit.pb(temp);
                temp=0; 
               
            }
             s.insert(a[2*i+2]);
        }
    }
   // vout(even);
    //vout(profit);
    profit.pb(temp);
    sort(all(profit));
    s.clear();
    temp=0;
    rep(i,n)
    {
        s.insert(a[i]);
        //debug(i,s);
        if(*s.begin()==1&&*s.rbegin()==i+1)
        {
            temp++;
        //cout<<i<<" ";
        }
    }//ce;
    //vout(odd);vout(even);
    //cout<<temp;ce;
    ll ans1=temp+*profit.rbegin();
    ll ans2=findMaxBeauty(a);
    if(ans1!=ans2){vout(a);}
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
// ll t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
vll a(10);
rep(i,10)a[i]=i+1;
do{
    solve(10,a);
}while(next_permutation(all(a)));

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