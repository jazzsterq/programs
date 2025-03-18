#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)cin>>b[i];
    sort(a.begin(),a.end());sort(b.begin(),b.end());
    int count=0;
    int ptr1=0,ptr2=0;
    while(ptr1<n&&ptr2<m)
    {
        if(abs(a[ptr1]-b[ptr2])<=k){
            count++;
            ptr1++;ptr2++;
        }
        else if(a[ptr1]>b[ptr2])
        {
            ptr2++;
        }
        else ptr1++;
    }
    cout<<count;
}