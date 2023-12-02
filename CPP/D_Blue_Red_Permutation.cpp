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
bool myComp(pair<ll,char> a,pair<ll,char> b)
{
    if(a.first<b.first)
    return true;
    if(a.first==b.first)
    {
        if(a.second<b.second)
        return true;
    }
    return false;
}
void solve()
{
    ll n;
    cin >>n;
    vector <pair<ll,char> > v(n);
    rep(i,n)
    cin>>v[i].first;
    rep(i,n)
    cin>>v[i].second;
   
    sort(v.begin(),v.end(),myComp);

    vector<ll> r;
    vector<ll> b;
    rep(i,n)
    {
        if(v[i].second=='B')
        b.pb(v[i].first);
        if(v[i].second=='R')
        r.pb(v[i].first);

    }
    ll temp=n-r.size()+1;
    rep(i,r.size())
    {
        if(r[i]>temp)
        {
            cout<<"NO";ce;return;
        }
        temp++;
    }
    temp=1;
    rep(i,b.size())
    {
        if(b[i]<temp)
        {
            cout<<"NO";ce;
            return;
        }
        temp++;
    }

cout<<"YES";ce;return;


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