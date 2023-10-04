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
    string s;
    cin >>s;
    s=s+'$';
    ll n=s.length();
    int flag=0;
    ll count=0;
    ll count3=0;
    ll count2=INT_MAX;
    if(s[0]=='B'||s[n-2]=='B')
    flag=1;
    rep(i,n)
    {
        if(s[i]=='A')
        {
        count++;
        count3++;
        }
        if(s[i]=='B'||s[i]=='$')
        {
        count2=min(count3,count2);
        count3=0;
        }
        if(s[i]=='B'&&s[i+1]=='B')
        {
            flag=1;
        }
    }
    if(flag==1)
    cout<<count<<endl;
    else{
        cout<<count-count2<<endl;
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