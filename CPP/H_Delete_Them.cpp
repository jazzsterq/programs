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
    ll n,m;
    cin >>n>>m;
    vector< pair< bool,string> > v(n);
    rep(i,n)
    v[i].first=1;
    ll count =0;
    rep(i,n)
    {
        cin>>v[i].second;
    }
    ll l;
    rep(i,m)
    {
        ll temp;cin>>temp;
        v[temp-1].first=0;
        if(i>0)
        if(v[temp-1].second.length()!=l)
        {
            count=1;
        }
        if(i==0)
        l=v[temp-1].second.length();
    }
    if(count==1)
    {
        cout<<"No";ce;return;
    }
    sort(v.begin(),v.end());

    string s="";
    // rep(i,v[0].second.length())
    // {
    //     s+="?";
    // }
    count=4;
    rep(i,n)
    {
        if(v[i].first==0)
        {
            if(s=="")
            {
                s=v[i].second;
            }
            else
            rep(j,l)
            {
                if(v[i].second[j]!=s[j])
                {
                    s[j]='?';
                }
            }
        }
        else
        {
            count=4;
            if(v[i].second.length()==l)
            {rep(j,v[i].second.length())
            {
                if(v[i].second[j]==s[j]||s[j]=='?'){}
                else
                {
                    count=2;
                    break;
                }

            }
            if(count==4){
            cout<<"No"<<endl;return;}}
        }
    }
    cout<<"Yes";ce;cout<<s;
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
        solve();
return 0 ;
}