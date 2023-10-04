#include <bits/stdc++.h>
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
    ll n , m;
    cin >> n>>m;
    ll x1,x2,y1,y2,x3,x4,y3,y4;
    cin >>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    ll w,b;
    if (m%2==0||n%2==0)
    {
        w=m*n/2;b=m*n/2;
    }
    else
    {
        w=(m*n/2)+1;b=m*n/2;
    }
    //cout<<w<<" "<<b;ce;
       
    if(!((x1%2)^(y1%2)))
    {
        m=x2-x1+1,n=y2-y1+1;
         w+=m*n/2;b-=m*n/2;
    }
    else
    {
        m=x2-x1+1,n=y2-y1+1;
        if (m%2==0||n%2==0)
        {
            w+=m*n/2;b-=m*n/2;
        }
        else
        {
            w+=(m*n/2)+1;b-=(m*n/2)+1;
        }
    }

    //cout<<w<<" "<<b;ce;
    if(!((x3%2)^(y3%2))) //start white
    {
        m=x4-x3+1,n=y4-y3+1;
        if (m%2==0||n%2==0)
        {
            w-=m*n/2;b+=m*n/2;
        }
        else
        {
            w-=(m*n/2)+1;b+=(m*n/2)+1;
        }
        
    }
    else
    {
        m=x4-x3+1,n=y4-y3+1;
         w-=m*n/2;b+=m*n/2;
    }

    //cout<<w<<" "<<b;ce;
    ll x5,y5,x6,y6;
    x5=max(x1,x3);
    y5=max(y1,y3);
    x6=min(x2,x4);
    y6=min(y2,y4);
    if(x5<=x6&&y5<=y6)
    {
    if(!((x5%2)^(y5%2))) //start white
    {
    
         m=x6-x5+1,n=y6-y5+1;
         w-=m*n/2;b+=m*n/2;
        
    }
    else
    {
        m=x6-x5+1,n=y6-y5+1;
        if (m%2==0||n%2==0)
        {
            w-=m*n/2;b+=m*n/2;
        }
        else
        {
            w-=(m*n/2)+1;b+=((m*n/2)+1);
        }

    }
    }

    cout<<w<<" "<<b;ce;

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