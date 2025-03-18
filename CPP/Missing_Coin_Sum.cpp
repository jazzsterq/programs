#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    long long sum=a[0];
    if(a[0]!=1){cout<<1;return 0;}
    for(long long i=1;i<n;i++)
    {
        if(a[i]>sum+1)
        {
            cout<<sum+1;return 0;
        }
        sum+=a[i];
    }
    cout<<sum+1;
}

