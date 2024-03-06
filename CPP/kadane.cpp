#include <iostream>
#include <climits>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int cursum =0, maxsum = INT_MIN,m=0;
    for(int i=0;i<n;i++)
    {
        cursum+=a[i];
        if(cursum <=0)
        {
        cursum=0;
        m =i;
        }
        maxsum = max(maxsum , cursum);
    }
    for(int i=0;i<m;i++)
    {
        cursum+=a[i];
        if(cursum <0)
        {
        cursum=0;
        }
        maxsum = max(maxsum , cursum);
    }
    cout << maxsum;
}
