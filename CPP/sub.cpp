#include <iostream>
using namespace std;

int main()
{
    ios:: sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for(int zz=1;zz<=t;zz++)
    {
        int a , b;
        cin >>a >> b;
        if(a > 1)
        cout << 1;
        else if(a==1 && b==2)
        {
            cout<< 3;
        }
        else
         cout << 2;
    }
}