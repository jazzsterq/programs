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

void path(ll a,ll b)
{
    if(a>0)
    {
       cout<< 1<<" "<<a<<" "<<"R";ce;
    }
    else
    {
        cout<< 1<<" "<<-a<<" "<<"L";ce;
    }
    if(b>0)
    {
       cout<< 1<<" "<<b<<" "<<"U";ce;
    }
    else
    {
        cout<< 1<<" "<<-b<<" "<<"D";ce;
    }
}
void path2(ll a,ll b)
{
    if(a==0)
    {
    if(b>0)
    {
       cout<< 1<<" "<<b<<" "<<"U";ce;
    }
    else
    {
        cout<< 1<<" "<<-b<<" "<<"D";ce;
    }
    }
    if(b==0){
    if(a>0)
    {
       cout<< 1<<" "<<a<<" "<<"R";ce;
    }
    else
    {
        cout<< 1<<" "<<-a<<" "<<"L";ce;
    }}
}
void solve()
{
    ll n;
    cin >>n;
    vector<pair < double, pair <ll,ll> > > v(n);
    ll sum=0;
    rep(i,n)
    {
        cin>>v[i].second.first >> v[i].second.second;
        v[i].first = sqrt(pow(v[i].second.first,2)+pow(v[i].second.second,2));
        if(v[i].second.first==0||v[i].second.second==0)
        sum+=4;
        else
        sum+=6;

    }
    cout<<sum;ce;
    sort(v.begin(),v.end());
    rep(i,n)
    {
         if(v[i].second.first==0||v[i].second.second==0)
         {
            path2(v[i].second.first,v[i].second.second);
            cout<<2;ce;
            path2(-v[i].second.first,-v[i].second.second);
            cout<<3;ce;
         }
         else
         {
            path(v[i].second.first,v[i].second.second);
            cout<<2;ce;
            path(-v[i].second.first,-v[i].second.second);
            cout<<3;ce;
         }
    }
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
        solve();
return 0 ;
}