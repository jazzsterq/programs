/**
* author : jazzsterq
*/
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
 
typedef long long ll;
#define be begin()
#define en end()
#define pb push_back
#define mp make_pair
#define pyes cout << "Yes\n"
#define pno cout << "No\n"
#define print(x) cout<<x<<endl
#define prints(x) cout<<x<<" "
#define ce cout << '\n'
#define endl '\n'
#define rev(v) reverse(v.begin(), v.end())
#define srt(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()
#define mnv(v) *min_element(v.begin(), v.end())
#define mxv(v) *max_element(v.begin(), v.end())
#define fi first
#define se second
#define deb(x) cout << #x << "=" << x << endl
#define vll vector<ll>
#define vp vector<pair<long long, long long> >
#define trav(v) for (auto it = v.begin(); it != v.end(); it++)
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)
#define MOD 1000000007

/*ll gcd(ll a, ll b) {if (!a || !b)return a | b;
unsigned shift = __builtin_ctz(a | b);
a >>= __builtin_ctz(a);
do {
b >>= __builtin_ctz(b);
if (a > b)
swap(a, b);
b -= a;
} while (b);
return a << shift;
}*/
ll m,n,sum;
vector <ll> t,z,y,tempo,ans;
bool check(ll mid)
{
    ll sum=0;
    tempo.clear();
    rep(i,n)
    {
        ll x=z[i]*t[i]+y[i];
        ll sumold=sum;
        sum+=z[i]*(mid/x)+min(((mid%x)/t[i]),z[i]);
        if(sum>m)
        {
            tempo.pb(min(n-sumold,(ll)0));
            continue;
        }
        tempo.pb(z[i]*(mid/x)+min(((mid%x)/t[i]),z[i]));
    }
    if(sum>=m)
    {
        ans=tempo;
        return 1;
    }
    else return 0;
}
void solve()
{
    cin>>m>>n;
    t.resize(n);
    z.resize(n);
    y.resize(n);
    rep(i,n)cin>>t[i]>>z[i]>>y[i];
    ll left=0,right=m*(y[0]+t[0]);
    while(left+1<right)
    {
        ll mid=left+(right-left)/2;
        
        if(check(mid)==0)
        left=mid;
        else
        right=mid;
        //cout<<mid<<" "<<left<<" "<<right;ce;
    }
    cout<<right;ce;
    rep(i,ans.size())
    cout<<ans[i]<<" ";
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
        solve();
return 0 ;
}