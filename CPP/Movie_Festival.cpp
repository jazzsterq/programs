#include <bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin>>n;
    pair<int,int> a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].second>>a[i].first;
    }
    sort(a,a+n);
    int count=0,last=0;
    for(int i=0;i<n;i++)
    {
        if(a[i].second>=last)
        {
            count++;
            last=a[i].first;
        }
    }
    cout<<count;
}