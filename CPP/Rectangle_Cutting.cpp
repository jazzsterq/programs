#include <bits/stdc++.h>
using namespace std;
class Heap{
    public: 
    int a[cap];
    cap;
    curr_cap;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
    function<int(int,int)> solve=[&](int n,int m){
        if(n==m)return dp[n][m]=0;
        if(dp[n][m]!=-1)return dp[n][m];
        int ans=INT_MAX;
        for(int i=1;i<n;i++){
            ans=min(ans,1+solve(i,m)+solve(n-i,m));
        }
        for(int i=1;i<m;i++){
            ans=min(ans,1+solve(n,i)+solve(n,m-i));
        }
        return dp[n][m]=ans;
    };
    solve(n,m);
    cout<<dp[n][m];
}