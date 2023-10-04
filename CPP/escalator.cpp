#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,k,H;
        cin >>n >>m >>k>>H;
        int a[n];
        int count =0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(((H-a[i])%k)==0 &&abs((H-a[i])/k)<=m-1)
            count++;
        }
        cout <<count<<"\n";
    }
}