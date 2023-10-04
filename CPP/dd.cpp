#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
    int t ;
    cin >> t;
    while (t--)
    {
        long long n ;
        cin >> n;
        long long a[n];
        for(long long i=0;i<n;i++)
        cin >> a[i];
        long long count =0;
        if(n==1)
        {cout<<a[0]<<endl;
        continue;}
        for(long long i=0;i<n;i++)
        {
            
            if(i==0)
            {
                if(a[i]>a[i+1])
                {count+= a[i]-a[i+1];
                a[i]=a[i+1];}
               // cout << i << " " << a[i] <<" "<< count<<endl;
            }
            else if(i==n-1)
            {
                if(a[i]>a[i-1])
                {count+=a[i]-a[i-1];
                a[i]=a[i-1];}
                 //cout << i << " " << a[i] <<" "<< count<<endl;
            }
            else
            {
                if(a[i]>=a[i-1]&&a[i]>=a[i+1])
                {
                    int add = max(a[i+1],a[i-1]);
                    count+=a[i]-add;
                    a[i]=add;
                //cout << i << " " << a[i] <<" "<< count<<endl;
                }
            }
            
        }
        count+=a[0]+a[n-1];
        for(long long i=1;i<n;i++)
        {
            count+=abs(a[i]-a[i-1]);
            
        }
        cout << count << "\n";
    }
}