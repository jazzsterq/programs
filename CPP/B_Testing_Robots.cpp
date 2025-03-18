#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll x,y,x0,y0;
    cin>>x>>y>>x0>>y0;
    string s;
    cin>>s;
    vector<vector<ll>> a(x,vector<ll>(y));
    int count=x*y;
    vector<ll> ans;
    ans.push_back(1);
    x0--;y0--;
    count--;
    a[x0][y0]=1;
    for(int i=0;i<s.length();i++)
    {
        ll nx=x0,ny=y0;
        if(s[i]=='U')
        {
            if(nx-1>=0)
            nx--;
        }
        else if(s[i]=='R')
        {
            if(ny+1<y)
            {
                ny++;
            }
        }
        else if(s[i]=='D')
        {
            if(nx+1<x)
            nx++;
        }
        else{
            if(ny-1>=0)
            ny--;
        }
        if(a[nx][ny]==1){
            ans.push_back(0);
        }
        else
        {
            a[nx][ny]=1;
            ans.push_back(1);
            count--;
        }
        x0=nx,y0=ny;
    }
    //cout<<count;
    ans.back()+=max(0,count);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}