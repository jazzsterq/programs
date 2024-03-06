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
    cin >>n ;
    ll a[n];
    int count=n;
    rep(i,n)
    {
    cin>>a[i];
    if(i>0)
    if(a[i-1]>a[i])
    count++;
    }
    cout<<count<<endl;
    cout<<a[0]<<" ";
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        cout<<a[i]<<" "<<a[i]<<" ";
        else
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
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
ll b[n];
    rep(i,n)
    b[i]=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<a[i];j++)
        b[j]++;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            cout<<"NO\n";
        return;
        }
    }
    cout<<"YES\n";
    return;