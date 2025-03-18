#include <bits/stdc++.h>
using namespace std;
int LIS(vector<int> a)
{
    int n=a.size();
    set <int> s;
    for(int i=0;i<n;i++)
    {
        if(s.empty()||(s.upper_bound(a[i]))==s.end())
        {
            s.insert(a[i]);continue;
        }
        s.erase(s.upper_bound(a[i]));
        s.insert(a[i]);
    }
    return s.size();
}
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    reverse(a.begin(),a.end());
    cout<<LIS(a);
}