/*
Isyana is given the number of visitors at her local theme park on N consecutive days. 
The number of visitors on the i-th day is V,. 
A day is record breaking if it satisfies both of the following conditions:
The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
• Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.
Note that the very first day could be a record breaking day!
Please help Isyana find out the number of record breaking days.
*/
#include <iostream>
using namespace std;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin>> n; // no. of days
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int highest,count=0;
highest=a[0];
if(n==1)
count=1;
for(int i=0;i<n;i++)
{
    if(i==0&&a[i]>a[i+1])
    count++;
    else if(i==n-1&&a[i]>highest)
    count++;
    else if(a[i]>a[i+1]&&a[i]>highest)
    {
        count++;
        highest= a[i];
    }
}
cout<<count;
}