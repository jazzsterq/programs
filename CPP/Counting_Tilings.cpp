#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> dp(n+1,vector<int>(m+1));
    dp[0][0]=1;
    for(int i=0;i<n;i++)
    {
        dp[i][0]=1;
    }
    for(int i=0;i<m;i++)dp[0][i]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i-2>=0)
            dp[i][j]+=dp[i-2][j];

            if(j-2>=0)
            dp[i][j]+=dp[i][j-2];
            cout<<dp[i][j]<<" ";
        }cout<<endl;
        
    }
    cout<<dp[n][m];
}