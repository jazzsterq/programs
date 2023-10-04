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
    int n;
    cin >>n;
    ll a[n];
    ll b[n+1];
    rep(i,n)
    b[i]=0;
    int count =0;
    rep(i,n)
    {
        cin >>a[i]; 
        if(a[i]<=n)     
        int b[a[i]]++;
        else
        count =2;
    }
    
    if(a[0]>n||count==2)
    {
        cout<<"NO\n";
        return;
    }
    
    for(int i=n;i>0;i--)
    {
        if(i!=n/2)
        if(a[i]!=n-i)
        {
            cout<<i<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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