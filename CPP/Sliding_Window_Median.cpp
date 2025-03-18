#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    priority_queue<int> maxh;
    priority_queue<int> minh;
    for(int i=0;i<k;i++)
    {
        maxh.push(a[i]);
    }
}