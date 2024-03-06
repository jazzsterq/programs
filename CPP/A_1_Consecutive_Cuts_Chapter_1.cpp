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
#define forb(i, s, e) for (ll i = s; i >= e; i--)
static int p=1;
void solve()
{
    ll n,k;
    cin>> n>>k;
    ll a[n];
    rep(i,n)
    cin>>a[i];
    ll b[n];
    rep(i,n)
    cin>>b[i];
    if(k==0)
    {
        rep(i,n)
        {
            if(a[i]!=b[i])
            {
                cout<<"Case #"<<p<<": NO"<<endl;p++;
                return;
            }
        }
        cout<<"Case #"<<p<<": YES"<<endl;p++;
            return;
    }
    rep(i,n)
    {
        if(a[i]==b[0])
        {
            for(int j=i,l=0;l<n;l++,j++)
            {
                if(a[j%n]!=b[l])
                {
                    cout<<"Case #"<<p<<": NO"<<endl;p++;
                    return;
                }
            }
            cout<<"Case #"<<p<<": YES"<<endl;p++;
            return;
        }
    }

    cout<<"Case #"<<p<<": NO"<<endl;p++;
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