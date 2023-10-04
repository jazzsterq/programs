#include <bits/stdc++.h>
#include <chrono>
#include<iostream>
#include<vector>
#include<map>
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
    cin>> s;
    vector<int> v(26,0);
    rep(i,s.length())
    {
        v[s[i]-'A']++;
    }
    int count=0,flag=0;
    rep(i,26)
    {
        if(v[i]%2!=0)
        {
            count++;flag=i;
        }
    }
    string k;

    if(count>1)
    {
        cout<<"NO SOLUTION";
    }

    else if(count==1)
    {
        rep(i,26)
        {
            if(i!=flag)
            {
                for(int j=0;j<v[i]/2;j++)
                {
                    cout<<(char)('A'+i);
                }
            }
        }
        for(int j=0;j<v[flag];j++)
                {
                    cout<<(char)('A'+flag);
                }
        for(int i=25;i>=0;i--)
        {
            if(i!=flag)
            {
                for(int j=0;j<v[i]/2;j++)
                {
                    cout<<(char)('A'+i);
                }
            }
        } 
    }
    else
    {
        rep(i,26)
        {
                for(int j=0;j<v[i]/2;j++)
                {
                    cout<<(char)('A'+i);
                }
            
        }
        for(int i=25;i>=0;i--)
        {
                for(int j=0;j<v[i]/2;j++)
                {
                    cout<<(char)('A'+i);
                }
            
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