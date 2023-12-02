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
    ll n,k,x;cin >>n>>k>>x;ll a[n];rep(i,n)cin>>a[i];
    sort(a,a+n);
   // rep(i,n){cout<<a[i]<<" ";}ce;
    vector<ll> count;
    ll sum=1;
    rep(i,n-1)
    {
        ll diff=a[i+1]-a[i];
        if(diff>x)
        {sum++;
        ll val=0;
        if(diff%x==0){val = diff/x-1;} // there is some problem with ceil or type conversion
        else{val =diff/x;}
        
            count.pb(val);
        }
        
    }
   // rep(i,count.size())cout<<count[i]<<" ";
    sort(count.begin(),count.end());
    
    rep(i,count.size())
    {
        if(count[i]<=k)
        {
           sum--;
           k-=count[i];
        }
else{break;}
    }
    cout<<sum;
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
        solve();
return 0 ;
}