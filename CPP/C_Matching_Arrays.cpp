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
    ll n,x;cin>>n>>x;
    ll count=0;
    vp a(n);
    vll b(n),ans(n);
    rep(i,n)
    {
        cin>>a[i].first;
        a[i].second=i;
    }
    rep(i,n)
    {
        cin>>b[i];
    }
    sort(all(a));
    sort(all(b));
    ll j=0;
    for(;j<n-x;j++)
    {
       ans[a[j].se]=b[x+j];
       //cout<<b[x+j]<<" ";
       if(a[j].fi>b[x+j])
       count++;
    }//ce;

    rep(i,x)
    { 
        ans[a[j].se]=b[i];
        //cout<<b[i]<<" ";
        if(a[j].fi>b[i])
        count++;
        j++;
    }//ce;
    //cout<<count;ce;
    if(count!=x)
    {
        cout<<"NO";ce;return;
    }
    cout<<"YES";ce;
    rep(i,n)
    cout<<(ans[i])<<" ";ce;
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
/*
ll i=-1;
    // rep(ans,n)
    // {
    //     if(a[ans].fi > b[0])
    //     {i=ans;break;}
    // }ll count=0;
    // if(i==-1)
    // for(;i<n&&count<x;i++,count++)
    // {
    //     if(a[i].first>b[count])
    //     f[a[i].second]=b[count];
    //     else
    //     {
    //         cout<<"NO";ce;return;
    //     }
    // }
    // rep(i,n-x)
    // {
    //     if(a[i].first>b[i+x])
    //     {
    //          cout<<"NO";ce;return;
    //     }
    //     else
    //     f[a[i].second]=b[i+x];
    // }
    //     cout<<"YES";ce;
    //     rep(i,n)
    //     cout<<f[i]<<" ";ce;

*/