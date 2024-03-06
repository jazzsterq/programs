#include <iostream>
using namespace std;
int main()
{
    int t ;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        int max =0,count=0;
        for(int i=1;i<=n;i++)
        {
            count =0;
            for(int j=0;j<n;j++)
            {
                if(i%a[j]==0)
                {
                count++;
                }
            }
            if(count >max)
            max = count ;
        }
        cout << max << endl;
    }
    
}