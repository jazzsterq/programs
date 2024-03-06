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
#define all(v) v.rbegin(), v.rend()
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

void solve()
{
    ll n;
    cin>>n;
    vp a(n),b(n),ad(n),bd(n);
    vll visited(n);
    rep(i,n)
    {
        cin>>a[i].fi;
        a[i].se=i;
    }
    rep(i,n)
    {
        cin>>b[i].fi;
        b[i].se=i;
    }
    ad=a;
    bd=b;
    ll p1=0,p2=0;
    sort(all(a));
    sort(all(b));
    rep(i,n-1)
    {
        if(a[i].fi==a[i+1].fi)
        {
           if(b[i+1].fi<b[i].fi)
           {
                auto temp = a[i].se;
                a[i].se=a[i+1].se;
                a[i+1].se=temp;
           }
        }
    }
    rep(i,n-1)
    {
        if(b[i].fi==b[i+1].fi)
        {
           if(a[i+1].fi<a[i].fi)
           {
                auto temp = b[i].se;
                b[i].se=b[i+1].se;
                b[i+1].se=temp;
           }
        }
    }
    rep(i,n)prints(a[i].fi);ce;
    rep(i,n)prints(b[i].fi);ce;
    ll score=0,count=0,flag=0;
    while(count<n)
    {
        if(flag==0)
        {
            if(a[p1].fi>=b[p2].fi&&visited[a[p1].se]==0)
            {
                cout<<a[p1].se<<"+";ce;
                cout<<score;ce;
                score+=a[p1].fi-1;
                visited[a[p1].se]=1;
                p1++;
            }
            else if(a[p1].fi<b[p2].fi&&visited[b[p2].se]==0)
            {
                cout<<b[p2].se<<"+2";ce;
                cout<<score;ce;
                score+=ad[b[p2].se].fi-1;
                visited[b[p2].se]=1;
                p2++;
            }
            else
            {
                p1++;p2++;continue;
            }
            count++;
            //cout<<score;ce;
            if(count>=n)break;
        }
        else
        flag=0;
        if(b[p2].fi>=a[p1].fi&&visited[b[p2].se]==0)
        {
            cout<<b[p2].se<<"-";ce;
            score-=b[p2].fi-1;
            visited[b[p2].se]=1;
            p2++;
        }
        else if(b[p2].fi<a[p1].fi&&visited[a[p1].se]==0)
        {
            cout<<a[p1].se<<"-2";ce;
            score-=bd[a[p1].se].fi-1;
            visited[a[p1].se]=1;
            p1++;
        }
        else
        {
            p1++;p2++;
            flag=1;continue;
        }
        count++;
    }
    cout<<score;ce;
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
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
    // vp a(n),b(n);
    // vll havea(n,1),haveb(n,1);
    // rep(i,n)
    // {
    //     cin>>a[i].fi;
    //     a[i].se=i;
    // }
    // rep(i,n)
    // {
    //     cin>>b[i].fi;
    //     b[i].se=i;
    // // }
    // // sort(all(a));
    // // sort(all(b));
    // // ll scorea=0,scoreb=0;
    // // ll pt1=0,pt2=0;
    // vll aa;
    // rep(i,n)
    // {
    //     aa.pb(i);
    // }
    // ll a[n][2];
    // vll b(2*n);
    // rep(i,n)
    // {
    //     cin>>a[i][0];
    //     b[i]=a[i][0];
    // }
    // rep(i,n)
    // {
    //     cin>>a[i][1];
    //     b[n+i]=a[i][1];
    // }
    // sort(all(b));
    // ll score=INT_MIN;
    // do
    // {
    //     ll tscore=0;
    //     rep(i,n)
    //     {
    //         tscore+=(a[i][i%2]-1)*pow(-1,i);
    //     }
    //     score=max(score,tscore);
    // }while(next_permutation(all(aa)));
    // cout<<score;ce;