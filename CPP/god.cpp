#include <iostream>
using namespace std;
int main()
{
    int t,n,p;
    cin>> t;
    for(int i=1 ;i<=t;i++)
    {
        cin>>n;
        cin>>p;
        int a[n];
        for (int j=0;j<n;j++)
        cin>>a[j];
        int sum=0;
        int b[n-1];
        for(int j=0;j<n-1;j++)
       { b[j]=abs(a[j]-a[j+1]);
        }
        for(int j=1;j<p;j++)
        {
            int max=b[0];int pos =0;
            for(int k=1;k<n-1;k++)
            {
                if(b[k]>max)
                {
                max=b[k];
                pos =k;
                }
            }
            b[pos]=0;
            
        }
        for(int j=0;j<n-1;j++)
        sum=sum+b[j];
        cout<<sum;
    }
}