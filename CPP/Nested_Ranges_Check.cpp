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
    ll n ;cin >>n;
    vector <pair <pair <ll , ll>,ll> > v(n);
    vector <bool> a(n,0),b(n,0);
    rep(i,n)
    {
        cin>>v[i].first.first>>v[i].first.second;
        v[i].second=i;
    }
    sort(v.begin(),v.end());
    rep(i,n)
    {
        forf(j,i+1,n)
        {
            if(v[j].first.second<=v[i].first.second)
            {
                a[v[i].second]=1;
                b[v[j].second]=1;
            }
            // if(v[j].first.second>=v[i].first.second)
            // {
            //     cout<<v[j].first.second<<" "<<v[i].first.second<<" "<<v[j].second;ce;
            //     b[v[j].second]=1;break;
            // }

        }
    }
    rep(i,n)
    cout<<a[i]<<" ";ce;
    rep(i,n)
    cout<<b[i]<<" ";ce;
    
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
        solve();
return 0 ;
}