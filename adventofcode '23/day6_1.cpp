#include <bits/stdc++.h>
#include <chrono>
#include<iostream>
#include <map>
#include<vector>
using namespace std;
#pragma GCC optimize("O1")
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
    vp v(1);
    rep(i,1)
    {
        cin>>v[i].first;
    }
    rep(i,1)
    {
        cin>>v[i].se;
    }
    ll ans=1;
    rep(i,1)
    {
        ll dis=0;ll c1,c2;
        rep(j,v[i].first)
        {
            dis=(v[i].first-j)*j;
            if(dis>v[i].second)
            {c1=j;break;}
        }
        for(ll j=v[i].first;j>=0;j--)
        {
            dis=(v[i].first-j)*j;
            if(dis>v[i].second)
            {c2=j;break;}
        }
        ans*=(c2-c1+1);
        //cout<<c1<<" "<<c2;ce;
    }
    cout<<ans;
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
        solve();
return 0 ;
}