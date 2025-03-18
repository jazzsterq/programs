#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num,queries;
    cin>>num>>queries;
    int arr[num];
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    while(queries--)
    {
        int start=-1,end=num;
        int temp;cin>>temp;
        while(start+1<end)
        {
            int mid=start+(end-start)/2;
            if(arr[mid]<=temp)
            start=mid;
            else
            end=mid;
        }
        cout<<start+1<<endl;
    }
}