#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    cin>>s;
    s="@"+s;
    ll count=0;
        vector <ll> q(26);
        ll n=s.length();
        vector <vector<ll> > v(n);
        for(int i=0;i<s.length();i++)
        {
            q[s[i]-'a']++;
            v[i]=q;
        }
        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<26;j++)
            cout<<v[i][j]<<" ";cout<<endl;
        }
        for(int i=0;i<s.length();i++)
        {
            int flag2=0;
            for(int j=n-1;j>i;j--)
            {
                ll flag=0;
                ll temp=0;
                for(int k=0;k<26;k++)
                {
                    if(v[j][k]!=0)
                    {
                        temp=v[j][k]-v[i][k];break;
                    }
                }
                for(int k=0;k<26;k++)
                {
                    if(v[j][k]!=0)
                    {
                        if((v[j][k]-v[i][k])!=temp)
                        {
                            flag=1;
                            cout<<j<<" "<<k<<endl;break;
                        }
                    }
                }

                if(flag==0)
                {
                    count++;
                    i=j;
                    flag2=1;
                    break;
                }
            }
        }
    cout<<count;
    return 0;
}