#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin>>n;
    
    int sum=0,ans=INT_MIN;
    for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    if(sum<0)
    {
        sum=0;
    }
    sum+=temp;
    ans=max(ans,sum);
    }
    ans=max(ans,sum);
    cout<<ans;
}