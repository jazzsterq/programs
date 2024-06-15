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
int minimumDifference(vector<int>& nums) {
        int n=nums.size()/2;
        vector<int> ans;
        int sump=0,sumn=0;
        for(int i=0;i<2*n;i++)
        {
            if(nums[i]>0)sump+=nums[i];
            else sumn+=nums[i];
        }
        vector<vector<vector<int> > > dp(2*n+1,vector<vector<int>>(sump-sumn+1));
        dp[0][-sumn].push_back(0);
        for(int i=1;i<=2*n;i++)
        {
            for(int j=sumn;j<=sump;j++)
            {
                dp[i][j-sumn].insert(dp[i][j-sumn].end(),dp[i-1][j-sumn].begin(),dp[i-1][j-sumn].end());
                if(j-nums[i-1]-sumn<0||j-nums[i-1]-sumn>sump-sumn)continue;
                //prints(j-nums[i-1]-sumn);
                for(int k=0;k<dp[i-1][j-nums[i-1]-sumn].size();k++)
                {
                    // deb(i);
                    // deb(j);deb(nums[i-1]);
                    // deb(dp[i-1][j-sumn-nums[i-1]][k]);
                    dp[i][j-sumn].push_back(dp[i-1][j-nums[i-1]-sumn][k]+1);
                    if(dp[i][j-sumn].back()==n)ans.push_back(j);
                    //deb(dp[i][j-sumn][0]);
                   // deb(j-sumn);
                    //deb(dp[i][j-sumn].size());
                }
            }
        }
        // for(int i=0;i<=2*n;i++)
        // {
        //     for(int j=sumn;j<=sump;j++)
        //     {
        //         //prints(i);prints(j-sumn);
        //         //prints(dp[i][j-sumn].size());//ce;
        //     }ce;
        // }
        int mx=INT_MAX;
        for(int i=0;i<ans.size();i++){
            //prints(ans[i]);
            mx=min(mx,abs(sump+sumn-2*ans[i]));
        }
        return mx;
}
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    print(minimumDifference(a));
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