/*
Problem:
An arithmetic array is an array that contains at least two integers and the differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3], and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are not arithmetic arrays.
Sarasvati has an array of N non-negative integers. The i-th integer of the array is A. She wants to choose a contiguous arithmetic subarray from her array that has the maximum length. Please help her to determine the length of the longest contiguous arithmetic subarray.

*/
#include <iostream>
using namespace std;
int main()
{
    int cd,n,start,end,length=0; 
   // cout << "No. of elements in the array";
    cin >> n;
    int a[n];
    for (int i =0;i<n;i++)   
        cin >> a[i];
    for (int s =0;s<n-1;s++)
    {
        cd = a[s+1]-a[s];
        start =s;
        end = s+1;

        for (int e=s+1;e<n-1;e++)
        {
            if((a[e+1]-a[e])==cd)
            {
                end = e+1;
            }
            else 
            break;
        }
        if(end-start+1>length)
        length = end - start +1;
    }
    cout << length;


}