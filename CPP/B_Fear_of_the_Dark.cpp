#include <bits/stdc++.h>
#include <chrono>
#include <map>
#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
#pragma GCC optimize("O3")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
 
typedef long long ll;
#define be begin()
#define en end()
#define pb push_back
#define pyes cout << "Yes\n"
#define pno cout << "No\n"
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
#define yess cout<<"Case #"<<p<<": YES"<<endl
#define noo cout<<"Case #"<<p<<": NO"<<endl
#define forb(i, s, e) for (ll i = s; i >= e; i--)

long double dis(ll x1,ll y1,ll x2,ll y2)
{
    return sqrt(pow((x1-x2),2)+pow((y1-y2),2));
}
void solve()
{
    ll px,py,ax,ay,bx,by;
    cin>>px>>py>>ax>>ay>>bx>>by;
    long double op=dis(0,0,px,py);
    long double oa=dis(0,0,ax,ay);
    long double ob=dis(0,0,bx,by);
    long double ap=dis(ax,ay,px,py);
    long double bp=dis(bx,by,px,py);
    long double ab=dis(bx,by,ax,ay);
    long double ans=max(min(ob,oa),min(ap,bp));

   
    if(ob<=oa&&bp<=ap)
    {
    }
    else if(ob>=oa&&bp>=ap){}
    else
    {
         ans=max(ans,ab/2.0);
    }

    cout<<fixed<<setprecision(10)<<ans;ce;

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