#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long ;
# define rep(i,a,b) for(int i=a;i<b;i++)
int main()
{
    int t;
    cin >> t ;
    while(t--)
    {
        ll n , d ,h ;
        cin >> n >> d  >> h;
        ll y[n];
        rep(i,0,n)
        cin >> y[i];
        double area =0.5*h*d;
        rep(i,1,n)
        {
            int k = y[i]-y[i-1];
            if(k>=h)
            area+=0.5*d*h;
            else
            area+=0.5*d*h- 0.5*(h-k)*(h-k)*d/h;
        }
        cout << area <<endl;
    }
    
}