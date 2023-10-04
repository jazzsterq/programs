#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    ios:: sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    for(int q=1;q<=t;q++)
    {
        int n ;
        cin >> n;
        int a[n];
        int mdiff[n-1];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(i>0)
            mdiff[i-1]=a[i]-a[i-1];
        }
        sort(mdiff,mdiff+n-1);
        int count =0;
        if(mdiff[0]>=0)
        {
            count = mdiff[0]/2 +1;
        }
        
        cout << count<< "\n";
    }
}
