#include <bits/stdc++.h>
#include <chrono>
#include <map>
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
#define yess cout<<"Case #"<<p<<": YES"<<endl
#define noo cout<<"Case #"<<p<<": NO"<<endl
#define forb(i, s, e) for (ll i = s; i >= e; i--)

void solve()
{
    ll n,p;
    cin>>n>>p;
    vp v(n);
    rep(i,n)
    {
        cin>> v[i].second;
    }
    rep(i,n)
    {
        cin>> v[i].first;
    }
    sort(v.begin(),v.end());
    ll dup=n-1;ll cost=p;
    if(dup>0)
    rep(i,n)
    {
        if(v[i].first<p)
        {
                cost+=v[i].first*min(v[i].second,dup);
                dup-=v[i].second;
        }
        else
        {
            cost+=dup*p;
            dup=0;
        }
        if(dup<=0)
        break;
    }
    cout<<cost;ce;
    return;
    int variableName;
    
    
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