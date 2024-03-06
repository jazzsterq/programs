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
    ll m,n;cin>>n>>m;
    vector <pair< pair<ll , ll > , ll > > v(m);
    rep(i,m)
    {
        cin >>v[i].first.second>>v[i].first.first;
        v[i].second=i;
    }
    sort(v.begin(),v.end());
    vector <pair< pair<ll , ll > , ll > > ans;ll sum=0;
    rep(i,2*n)
    {
        ans.pb(make_pair(make_pair(v[i].first.second,v[i].first.first),v[i].second));
        sum+=v[i].first.first;

    }
    // rep(i,2*n)
    // {
    //     cout<<ans[i].first.first<<" "<<ans[i].first.second<<" "<<ans[i].second;ce;
    // }
    sort(ans.begin(),ans.end());
    cout<<sum;ce;

    rep(i,n)
    {
        cout <<ans[i].second+1<<" "<<ans[2*n-i-1].second+1;ce;
    }

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