#include <iostream>
using namespace std;
using ll = long long;
int main()
{
    int t ;
    cin >> t;
    while (t--)
    {
        ll x , y;
        cin >> x >> y ;
        ll a = max ( x,y);
        ll ans = (a-1)*(a-1);
        if(a%2==0)
        {
            if(y>x)
            {
                ans=ans+x;
            }
            else 
            {
                ans+=2*a-y;
            }
        }
        else
        {
            if(y<x)
            {
                ans=ans+y;
            }
            else 
            {
                ans+=2*a-x;
            }
        }
        cout << ans << endl;

    }
}