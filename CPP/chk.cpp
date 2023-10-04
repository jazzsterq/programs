#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        int a[n],b[n],c[m];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int j=0;j<m;j++)
        {
            for(int i=0;i<n;i++)
            {
                b[i]=a[i];
            }
            int l,r;
            cin >>l>>r;
           /* int cc=0;
            for(int i=l-1;i<r;i++)
            {
                if(b[i]==0)
                cc++;
            }
            for(int i=l-1;i<r;i++)
            {
                if(cc>0)
                b[i]=0;
                else
                b[i]=1;
            }*/
            sort(b+l-1,b+r);
            int num=0,base=1;
            for(int i=n-1;i>=0;i--)
            {
                num+=b[i]*base;
                base=base*2;
            }
            c[j]=num;
        }
        sort(c,c+m);
        int count =1;
        for(int i=1;i<m;i++)
        {
            if(c[i]!=c[i-1])
            count++;
        }
        cout<<count<<"\n";
    }
}