#include <iostream>
using namespace std;
int main()
{
    int t;
    ios:: sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    for(int q=1;q<=t;q++)
    {
        int n,count=0;
        cin >>n;
        int a[n],b[n],d[n];
        for(int i=0;i<n;i++)
        {
        cin>>a[i]>>b[i];
        d[i]=a[i]-b[i];
        if(d[i]<=0)
        count++;
        }
        
        cout<<(n-count)<<"\n";
        
    }
}