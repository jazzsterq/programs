#include <bits/stdc++.h>
#include <chrono>
#include<iostream>
#include <map>
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
    ll n;
    cin>>n;
    vp v(n);
    rep(i,n)
    {
        cin>>v[i].second>>v[i].first;
       // v[i].first=v[i].first-v[i].second;
    }
    sort(v.begin(),v.end());
    ll count=1;
    ll et=0;
    // rep(i,n)
    // {
    //     if(v[i].second>=et)
    //     {
    //         et=v[i].second+v[i].first;
    //         count++;
    //     }

    // }
    // cout<<count;ce;
    // rep(i,n)
    // cout<<v[i].second<<
    // " ";ce;
    // rep(i,n)
    // cout<<v[i].first<<" ";ce;

    rep(i,n)
    {
        if(v[i].second>=v[et].first)
        {
            count++;et=i;
        }
    }
    cout<<count;ce;
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
        solve();
return 0 ;
}