// 1 2
// 1 3
// 2 1
// 2 1
// 1 2
// 3 2
// 1 2
// 3 2
// 2 1
// 2 1
// 3 1
// 2 2
// 2 2
// 1 2
// 3 2
// 2 3
// 1 3
// 2 2
// 3 1
// 3 2
// 1 2
// 1 1
// 3 2
// 2 1
// 2 3
// 3 1
// 1 1
// 3 2
// 2 2
// 2 3
// 1 3
// 2 2
// 1 2
// 2 2
// 2 3
// 3 3
// 2 2
// 3 3
// 2 1
// 3 2
// 3 3
// 1 3
// 1 2
// 3 3
// 1 3
// 1 1
// 1 3
// 2 2
// 2 3
// 3 2
// 3 3
// 3 3
// 1 3
// 2 1
// 1 2
// 2 1
// 3 3
// 2 3
// 2 3
// 2 3
// 2 3
// 3 2
// 3 1
// 2 3
// 1 2
// 2 3
// 1 2
// 3 1
// 1 3
// 3 1
// 3 1
// 2 1
// 2 2
// 2 3
// 3 1
// 3 3
// 1 2
// 2 2
// 3 1
// 1 1
// 3 1
// 3 3
// 3 1
// 1 2
// 2 1
// 1 2
// 2 3
// 2 1
// 1 3
// 2 3
// 2 1
// 3 1
// 1 2
// 3 1
// 2 2


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
    ll a1,a2,b1,b2;cin>>a1>>a2>>b1>>b2;
    ll count=0;
    if(a1==b1)
    {
        if(a2+b2==a1)
        count=1;
    }
    if(a1==b2)
    {
        if(a2+b1==a1)
        count=1;
    }
    if(a2==b1)
    {
        if(a1+b2==a2)
        count=1;
    }
    if(a2==b2)
    {
        if(a1+b1==a2)
        count=1;
    }
    if(count==1)cout<<"Yes"<<endl;else cout<<"No"<<endl;
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




