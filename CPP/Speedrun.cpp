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


void solve()
{
    ll n,k;
    cin>>n>>k;
    vll a(n),h(n),pre(n);
    rep(i,n)cin>>a[i];
    rep(i,n){
        cin>>h[i];

    }
    pre[0]=h[0];
    forf(i,1,n){
        pre[i]=pre[i-1]+h[i];
    }
    ll start=n;
    ll pos=0,flag=0;
    rep(i,n)
    {
        if(pre[i]+pos>a[i])
        {
            flag=1;break;
        }
    }
    if(flag==0)print("YES");
    else print("NO");

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
