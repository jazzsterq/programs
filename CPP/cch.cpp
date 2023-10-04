#include <iostream>
#include <cstdlib>
using namespace std;
int distance (int a , int b , int c , int d,int n ,int m)
{
    if(a<1||a>n)
    return 1;
    if(b<1||b>m)
    return 1;
    if(c<1||c>n)
    return 1;
    if(d<1||d>m)
    return 1;
    int j = abs(a-c)+abs(b-d);
    return j;
}
int main()
{
    int t;
    ios:: sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    for(int q=1;q<=t;q++)
    {
        int n,m,k;
        cin >> n >> m >> k;
        int v1,v2;
        cin >> v1 >> v2 ;
        int f[k][2];
        for (int i=0;i<k;i++)
        {
            cin >> f[i][0] >> f[i][1];
        }
        int f1 =0,f2=0,f3=0,f4=0;
        for(int i=0;i<k;i++)
        {
            
            if(distance(v1+1,v2,f[i][0],f[i][1],n,m)==1 && f1!=1)
            {
                f1 = 1;
            }
            if(distance(v1,v2+1,f[i][0],f[i][1],n,m)==1&& f2!=1)
            {
                f2 = 1;
            }
            if(distance(v1-1,v2,f[i][0],f[i][1],n,m)==1&& f3!=1)
            {
                f3 = 1;
            }
            if(distance(v1,v2-1,f[i][0],f[i][1],n,m)==1&& f4!=1)
            {
                f4 = 1;
            }
            
        }
        if(f1==1&&f2==1&&f3==1&&f4==1)
        cout << "NO" << "\n";
        else
        cout << "YES" << "\n";
    }
}
