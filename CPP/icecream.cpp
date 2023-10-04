#include <iostream>
using namespace std;
int main()
{
    int t,d,m;
    cin >> t >>d>>m;
    int a[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    
    if(m==0)
    {
        if(d>=t)
        cout<<"Y";
        else
        cout<<"N";
        return 0;
    }
    if(d-a[m-1]>=t||a[0]>=t)
    {
    cout<<"Y";
    return 0;
    }
    for(int i=1;i<m;i++)
    {
        if(a[i]-a[i-1]>=t)
        {
            cout<<"Y";
            return 0;
        }
    }
    cout<<"N";
    return 0;
}