// it's to compute the max. sum subarray of an array 
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, max_sum,temp_sum,startf=0,endf=0,sum1;
    cout << "Enter the no. of elements in the array";
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    max_sum = INT_MIN;
    for(int start = 0 ;start<n;start++)
    {
        sum1 = a[start];
        for(int end =start+1;end<n;end++)
        {

            temp_sum = sum1+a[end];

            if(temp_sum>sum1 && temp_sum > max_sum)
            {
                max_sum = temp_sum;
                startf=start;
                endf = end;
            }
            sum1+=a[end];

        }
    }
    for (int i = startf;i<=endf;i++)
    cout << a[i] << " ";
    
    cout << "\n" << max_sum;

}


