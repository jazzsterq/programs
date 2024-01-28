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
    cin>>n;
    vp ans;
    vll v(n);
    rep(i,n)
    {
        cin>>v[i];
    }
    ll count=0;
    sort(all(v));
    v.pb(-1);
    ans.pb(make_pair(0,0));
    rep(i,n)
    {
        count++;
        
        if(v[i+1]-v[i]==1)
        {
            ans.pb(make_pair(v[i],count));
            count=0;
        }
        else if(v[i+1]-v[i]!=0)
        {
            ans.pb(make_pair(v[i],count));
            count=0;
            ans.pb(make_pair((v[i]+1),0));
        }
    }
    ll output=0;
    rep(i,ans.size()-1)
    {
        output+=max((ll)0,ans[i+1].se-ans[i].se);
    }
    cout<<output<<endl;
    // rep(i,ans.size())
    // cout<<ans[i].fi<<" "<<ans[i].se<<endl;
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