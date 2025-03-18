#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int mid;
    if(n%2)
    {
        mid=a[n/2];
    }
    else
    {
        mid=(a[(n-1)/2]);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=abs(mid-a[i]);
    }
    cout<<ans;
}