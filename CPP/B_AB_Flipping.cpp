#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define be begin()
#define en end()
#define pb push_back
#define pyes cout << "YES\n"
#define pno cout << "NO\n"
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

void solve()
{
    ll n; cin >>n;
    string s;cin >>s;
    ll count=0 , ca=0,cb=0;ll i=n;
    rep(j,n)
    {
        if(s[j]=='A')
        {
            i=j;break;
        }
    }s+='A';
    for(;i<n;i++)
    {
        if(cb!=0&&s[i]=='A')
        {
            count+=cb;
            ca=2;
            cb=0;continue;
        }
        if(ca!=0&&s[i]=='B')
        {
            count+=ca;
            ca=1;cb=0;continue;
        }
        if(s[i]=='A')
        ca++;
        if(s[i]=='B')
        cb++;
    }
    cout<<count;ce;
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