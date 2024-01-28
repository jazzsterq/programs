Codeforces
| In English По-русски
Jazz1234 | Logout
 You have +161! Wow!

HOMETOPCATALOGCONTESTSGYMPROBLEMSETGROUPSRATINGEDUAPICALENDARHELP

 Reminder: in case of any technical issues, you can use the lightweight website m1.codeforces.com, m2.codeforces.com, m3.codeforces.com.×
Codeforces Round 921 (Div. 2)
Contest is running
00:25:55
Contestant
Add to favourites
→ Score table
Score
Problem A	314
Problem B	628
Problem C	785
Problem D	1099
Problem E	1570
Problem F	1884
Successful hack	100
Unsuccessful hack	-50
Unsuccessful submission	-50
Resubmission	-50
* If you solve problem on 01:33 from the first attempt
PROBLEMSSUBMIT CODEMY SUBMISSIONSSTATUSHACKSROOMSTANDINGSCUSTOM INVOCATION
    
My Submissions
  
#	When	Who	Problem	Lang	Verdict	Time	Memory
243635625	01:24:29	Jazz1234	C - Did We Get Everything Covered?	GNU C++20 (64)	Wrong answer on pretest 2 🤔	46 ms	9500 KB
243627873	01:12:47	Jazz1234	C - Did We Get Everything Covered?	GNU C++20 (64)	Wrong answer on pretest 2 🤔	46 ms	9504 KB
243623460	01:06:32	Jazz1234	C - Did We Get Everything Covered?	GNU C++20 (64)	Wrong answer on pretest 2 🤔	62 ms	9496 KB
243618133	00:59:18	Jazz1234	C - Did We Get Everything Covered?	GNU C++20 (64)	Wrong answer on pretest 2 🤔	46 ms	9496 KB
243596823	00:34:33	Jazz1234	C - Did We Get Everything Covered?	GNU C++20 (64)	Wrong answer on pretest 2 🤔	78 ms	9500 KB
243574342	00:15:05	Jazz1234	B - A Balanced Problemset?	GNU C++20 (64)	Pretests passed 😘 (5)	343 ms	9500 KB
243557085	00:03:26	Jazz1234	A - We Got Everything Covered!	GNU C++20 (64)	Pretests passed 😘 (3)	15 ms	9500 KB

Codeforces (c) Copyright 2010-2024 Mike Mirzayanov
The only programming contests Web 2.0 platform
Server time: Jan/27/2024 21:48:58UTC+5.5 (i2).
Desktop version, switch to mobile version.
Privacy Policy
Supported by
TON ИТМО
By Jazz1234, contest: Codeforces Round 921 (Div. 2), problem: (C) Did We Get Everything Covered?, Wrong answer on pretest 2, #, Copy
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
    ll n,k,m;
    cin>>n>>k>>m;
    string s ;
    cin>>s;
        vll count(k);
    rep(i,m)
    {
        count[s[i]-'a']++;
    }
    rep(i,k)
    {
        if(count[i]<n)
        {
            print("NO");
            rep(i,n)
            cout<<(char)('a'+i);ce;return;
        }
    }
    ll dp[m][k];
    memset(dp,0,sizeof(dp));
    rep(i,m)
    {
        forf(j,i+1,m)
        {
            dp[i][s[j]-'a']++;
        }
    }
    ll dpp[k];
    vll check(k);
    
    rep(i,k)dpp[i]=1;
    rep(i,m)
    {
 
        if(dpp[s[i]-'a']>=n)continue;
        rep(j,k)
        {
 
            if(dp[i][j]<n-dpp[s[i]-'a'])
            {
                print("NO");
                rep(g,dpp[s[i]-'a'])
                {
                    cout<<s[i];
                }
                rep(g,n-dpp[s[i]-'a'])
                {
                    cout<<(char)(j+'a');
                }ce;
                return;
            }
        }
        dpp[s[i]-'a']++;
        check[s[i]-'a']++;
    }
    rep(i,k)
    {
        if(check[i]<1)
        {
            print("NO");
            print((char)('a'+i));return;
        }
    }
    print("YES");
    return;
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
