#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,w;
    cin>>n>>w;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int start=0,end=n-1;
    int count=0;
    while(start<end)
    {
        if(a[start]+a[end]<=w)
        {
            count++;start++;end--;
        }
        else
        {
            count++;end--;
        }
    }
    if(start==end)count++;
    cout<<count;
}