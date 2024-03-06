#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
vector <ll> sums;
vector <ll> a;
ll n;
void solve (ll index,ll sum)
{
    if(index==n)
    {
        sums.push_back(sum);return;
    }
    solve(index+1,sum+a[index]);
    solve(index+1,sum);
}
int main()
{
    cin>>n;
    a.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    solve(0,0);
    for(auto i:sums)cout<<i<<endl;
    // aim is to find all the possible sums taking and not taking elements from a using recursion
}