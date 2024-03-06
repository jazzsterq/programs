#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n;
    cout<<"Enter the no. of men and women";
    cin>>n;
    ll man[n][n],woman[n][n],proposed[n],pairs[n];//man is value
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter the man "<<i<<"'s preferences - ";
        proposed[i-1]=0;
        pairs[i-1]=-1;
        for(int j=0;j<n;j++)
        {
            cin>>man[i-1][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter the woman "<<i<<"'s preferences - ";
        for(int j=0;j<n;j++)
        {
            ll temp;
            cin>>temp;
            woman[i-1][temp]=j;
        }
    }
    ll free=n;
    vector<ll> fre(n);
    while(free>0)
    {
        for(int i=0;i<n;i++)
        {
            if(fre[i]==0)
            {
            if(pairs[man[i][proposed[i]]]==-1)
            {
                pairs[man[i][proposed[i]]]=i;
                free--;
                fre[i]=1;
            }
            else
            {
                if(woman[man[i][proposed[i]]][i]<woman[man[i][proposed[i]]][pairs[man[i][proposed[i]]]])
                {
                    fre[pairs[man[i][proposed[i]]]]=0;
                    pairs[man[i][proposed[i]]]=i;
                    fre[i]=1;
                }
            }
            proposed[i]++;
            for(int i=0;i<n;i++)
            {
                cout<<pairs[i]<<" "<<i<<endl;
            }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<pairs[i]+1<<" "<<i+1<<endl;
    }
}