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
    ll n,m;cin >>n>>m;
    ll a[n],b[m];
    rep(i,n)
    {
        cin>>a[i];
    }
    rep(i,m)cin>>b[i];
    sort(a,a+n);sort(b,b+m);
    ll ct1=0,ct2=0,count=0;
    //rep(i,n)cout<<a[i]<<" ";ce;rep(i,m)cout<<b[i]<<" ";ce;
    for(int i=0,j=0;i<n&&j<m;)
    {
        if(a[i]==b[j])
        {
            ct1=1,ct2=1;
            for(int k=i+1,l=j+1;k<n&&l<m;)
            {
                if(a[k]!=a[i]&&b[l]!=b[j])
                {
                    break;
                }
                if(a[k]==a[i])
                {ct1++;k++;
                }
                if(b[l]==b[j])
                {
                    ct2++;l++;
                }
                
            }
            //cout<<ct1<<" "<<ct2;ce;
            count+=ct1*ct2;
            i+=ct1;j+=ct2;
           
        }
        else if(a[i]<b[j])
        {
            
            i++;
        }
        else
        {
            j++;
        }
        
    }
    cout<<count;
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
        solve();
return 0 ;
}