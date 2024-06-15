#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
       string s;
       cin>>s;
       ll n=s.length();
        vector < vector <int > > v(s.length(),vector <int> (n));
        vector <int> dp(s.length(),INT_MAX);
        for(int i=0;i<n;i++)
        {
            vector <int> temp(26);
            for(int j=i;j<n;j++)
            {
                temp[s[j]-'a']++;
                ll tempo=temp[s[j]-'a'];
                ll flag=0;
                for(int k=0;k<26;k++)
                {
                    if(temp[k]==0)continue;
                    if(temp[k]!=tempo)
                    {
                        v[i][j]=0;flag=1;break;
                    }
                }
                if(flag==0)v[i][j]=1;
                
            }//cout<<endl;
        }
        dp[0]=1;
        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(v[j][i]==0)continue;
                if(j==0)dp[i]=1;
                dp[i]=min(dp[i],dp[j-1]+1);
            }
        }
        for(int i=0;i<n;i++)cout<<dp[i]<<" ";cout<<endl;
}