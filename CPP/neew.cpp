#include <iostream>
using namespace std;
int main()
{
    int t;
    ios:: sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n;
        long long a[n];
        int count =0;
        long long sum =0;
        for(int i =0;i<n;i++)
        {
            cin >> a[i];
        }
        if(n==1)
        {
            cout << "NO \n";
            continue;
        }
        for(int i =0;i<n;i++)
        {
            if(a[i]==1)
            count++;
            else
            sum+=a[i];
        }
        
        if(count==0)
        cout << "YES \n";
        else
        {
            if(sum-count>0)
            cout << "YES \n";
            else
            cout << "NO \n";
        }
    }
}
        