#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <ll> a;
ll countt=0;
vector<ll> merge_sort(int start,int end)
{
    vector <ll> ans;
    if(start==end){ans.push_back(a[start]);
    return ans;}
    vector <ll> b=merge_sort(start,(start+end)/2);
    vector <ll> c=merge_sort(((start+end)/2)+1,end);
    int j=0,k=0;
    while(j<b.size()&&k<c.size())
    {
        if(b[j]<c[k])
        {
            ans.push_back(b[j]);
            j++;
        }
        else
        {
            ans.push_back(c[k]);
            countt+=b.size()-j;
            k++;
        }
    }
    while(j<b.size())
    {
        ans.push_back(b[j]);j++;
    }
    while(k<c.size())
    {
        ans.push_back(c[k]);k++;
    }
    return ans;
}
int main()
{
    ll n;
    cin>>n;
    a.resize(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    a=merge_sort(0,n-1);
    cout<<countt;

}