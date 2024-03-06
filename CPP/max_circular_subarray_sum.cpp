#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int maxsum=-999999;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int count=0;
    int chk=-99;
    int cursum=0;
    for(int i=0;i<n;i++)
    {
        if(chk==i&&count==1)
        break;
        cursum+=a[i];
        if(maxsum<=cursum)
        maxsum= cursum;
        if(cursum<0)
        {
            cursum=0; chk=i+1;
        }
        if(maxsum>=cursum)
        maxsum= cursum;
        if(i==n-1&&count==0)
        {
            i=0 ;count=1;
        }

    }
    cout<< maxsum;
}
