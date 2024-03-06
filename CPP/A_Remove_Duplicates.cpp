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
    ll n;
    cin >>n;
    set <ll> exist;
    vll ans;
    vll oS(n);
    rep(i,n)
    {
        cin>>oS[i];
    }
    forb(i,n-1,0)
    {
        if(exist.find(oS[i])==exist.end())
        {
            exist.insert(oS[i]);
            ans.pb(oS[i]);
        }
    }
    cout<<ans.size();ce;
    for(auto it = ans.rbegin();it!=ans.rend();it++)//for(auto element :ans)cout<<element; in ascending
    {
        cout<<*it<<" ";
    }
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
    {
        solve();
    }

return 0 ;
}