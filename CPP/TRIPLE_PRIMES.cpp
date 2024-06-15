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

const ll MAXN=100009;
const ll MODN= 1e9 + 7;
bool is_prime[MAXN+1];
void sieve_of_eratosthenes( );
void solve()
{
    ll n;
    cin>>n;
    vll primes,prss;
    rep(i,sqrt(n))
    {
        if(is_prime[i])primes.pb(i);
    }
    int si=primes.size();
    sort(all(primes));
    rep(i,si)
    {
        prss.pb(primes[i]*primes[i]);
    }
    rep(i,si)
    {
        rep(j,si)
        {
            if(i==j)continue;
            ll sumtwo=primes[i]*primes[i]+primes[j]*primes[j];
            if((n-sumtwo==primes[i]*primes[i])||(n-sumtwo==primes[j]*primes[j]))continue;
            if(binary_search(prss.begin(),prss.end(),n-sumtwo))
            {
                print("Yes");return;
            }
        }
    }
    print("No");
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
ll t;
    cin >> t;
    sieve_of_eratosthenes();
    while(t--){
        solve();
    }

return 0 ;
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
