#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    ll m;
    cin>>m;
    vector<vector<ll>> adj(n);
    for(int i=0;i<m;i++)
    {
        ll temp1,temp2;
        cin>>temp1>>temp2;
        temp1--;temp2--;
        adj[temp1].push_back(temp2);
    }
    
}