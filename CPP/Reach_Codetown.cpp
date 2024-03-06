#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define be begin()
#define en end()
#define pb push_back
#define mp make_pair
#define pyes cout << "YES\n"
#define pno cout << "NO\n"
#define ce cout << '\n'
#define print(x) cout<<x<<endl
#define prints(x) cout<<x<<" "
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
ll check(char a)
{
     char vo[] ={'A','E','I','O','U'};
     rep(i,5)
     {
        if(a==vo[i])
        {
            return 1;
        }
     }
     return 0;
}
void solve()
{
    string s;
    cin>>s;
    ll a[]={0,1,0,1,0,1,0,0};

    rep(i,8)
    {
        if(check(s[i])!=a[i])
        {
            cout<<"NO";ce;return;
        }
    }
    cout<<"YES";ce;

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