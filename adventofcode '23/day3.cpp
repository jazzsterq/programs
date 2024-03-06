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
    vector <string> s;
    string a;
    while(cin>>a)
    {
        s.pb('.'+a+'.');
    }ll sum=0;
    rep(i,s.size())
    {
        rep(j,s[i].length())
        {
            if(s[i][j]=='*')
            {
                ll count=0;
                pair <ll,ll> p1,p2;
                for(int n=i-1;n<=i+1;n++)
                {
                  for(int m=j-1;m<=j+1;m++)
                    {
                        int num=s[n][m]-'0';
                        if(num>=0&&num<=9&&(abs(m-p1.second)>1||n!=p1.fi||count==0))
                        {
                            if(count==0)
                            p1=make_pair(n,m);
                            else
                            p2=make_pair(n,m);
                            count++;
                        }
                    }
                }
               // cout<<p1.fi<<" "<<p1.se;ce;
                //cout<<p2.fi<<" "<<p2.se;ce;
                if(count==2)
                {
                    ll start1,end1,start2,end2;
                    rep(i,4)
                    {
                        int num= s[p1.fi][p1.se-i]-'0';
                         if(num>=0&&num<=9)
                         start1=p1.se-i;
                         else
                         break;
                    }
                    rep(i,4)
                    {
                        int num= s[p1.fi][p1.se+i]-'0';
                        //cout<<num<<p1.se;ce;
                         if(num>=0&&num<=9)
                         end1=p1.se+i;
                         else
                         break;
                    }
                    rep(i,4)
                    {
                        int num= s[p2.fi][p2.se-i]-'0';
                         if(num>=0&&num<=9)
                         start2=p2.se-i;
                         else
                         break;
                    }
                    rep(i,4)
                    {
                        int num= s[p2.fi][p2.se+i]-'0';
                         if(num>=0&&num<=9)
                         end2=p2.se+i;
                         else
                         break;
                    }
                    //cout<<start1<<" "<<end1;ce;
                    //cout<<start2<<" "<<end2;ce;
                    ll num1=0,num2=0;
                    for(int x=start1;x<=end1;x++)
                    {
                        num1=num1*10+(s[p1.fi][x]-'0');
                    }
                    for(int x=start2;x<=end2;x++)
                    {
                        num2=num2*10+(s[p2.fi][x]-'0');
                    }
                  //  cout<<num1;ce;cout<<num2;ce;
                    sum+=(num1*num2);
                }
                i=p
            }
        }
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