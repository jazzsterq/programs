//#include <bits/stdc++.h>
#include <chrono>
#include<iostream>
#include<vector>
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
#define forb(i, s, e) for (ll i = s; i >= e; i--)

void solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
    ll mx1=INT_MIN,mn1=INT_MAX,mx2=INT_MIN,mn2=INT_MAX;
    ll a[n];
    ll b[m];
    rep(i,n)
    cin>>a[i];
    rep(i,m)
    cin>>b[i];
    ll sum=0;

    rep(i,n)
    {
        mx1=max(mx1,a[i]);
        mn1=min(mn1,a[i]);
        sum+=a[i];
    }
    rep(i,m)
    {
        mx2=max(mx2,b[i]);
        mn2=min(mn2,b[i]);
    }
        if(mn1<mx2)
        {
        sum-=mn1;
        sum+=mx2;
        }
    if(k%2==1)
    {
        cout<<sum;
        ce;
        return;
    }
    else
    {
        
        sum+=min(mn1,mn2);
        sum-=max(mx1,mx2);
        cout<<sum;
        ce;
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