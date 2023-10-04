#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
using ll = long long ;
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    ll min = INT_MAX;
    for(int i=0 ;i<n;i++)
    {
        cin >>a[i];
        if(a[i]<min)
        min = a[i];
    }
    ll count =0,maxcount=0;
    for(int i=0;i<2*n;i++)
    {
        int j=i%n;
 
        if(a[j]==min)
        {
            maxcount=max(count,maxcount);
            count=0;
        }
        else
                count++;
        
    }
    cout << a[min];
}
