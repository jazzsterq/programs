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

void solve()
{
    string s;cin>>s;
    string ans="";
    ll ss=0,sc=0;
    reverse(all(s));
    rep(i,s.length())
    {
        if(s[i]=='b')
        {
            ss++;continue;
        }
        if(s[i]=='B')
        {
            sc++;continue;
        }
        if(s[i]<='z'&&s[i]>='a')
        {
            if(ss>0)
            {
                ss--;continue;
            }
            else
            ans+=s[i];
        }
        else
        {
            if(sc>0)
            {
                sc--;continue;
            }
            else
            ans+=s[i];
        }
    }
    reverse(all(ans));
    cout<<ans;ce;
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