#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,b;
        cin>>n>>b;
        vector<ll> a(n);
        for(ll i=0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end());
        ll start=-1,end=(*min_element(a.begin(),a.end())*b)+1ll;
        function <ll(ll)> check = [&](ll mid){
            ll num=0;
            for(ll i=0;i<n;i++)
            {
                num+=mid/a[i];
            }
            return num>=b;
        };
        while(start+1<end)
        {
            ll mid=start+(end-start)/2;
            if(check(mid))end=mid;
            else start=mid;
        }
        cout<<end<<endl;
    }
    
}