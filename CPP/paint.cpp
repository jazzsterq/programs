
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long a[n];
    int min =0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]< a[min])
        {
            min =i;
        }
    }
    int j=0;
    int count =0,maxcount=0;
    for(int i=0;i<2*n;i++)
    {
        count ++;
        j= i%n;
        if(a[j]==a[min])
        {
            maxcount = max(count , maxcount);
            count=0;
            
        }
        
    }
    cout << a[min]*n+maxcount-1;
}