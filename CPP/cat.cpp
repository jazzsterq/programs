#include <iostream>
using namespace std;
long long mod(long long a,long long n)
{
    if(a%n!=0)
    a=a%n;
    else
    a=n;
    return a;
}
int main()
{
    int t ;
    cin >> t;
    while (t--)
    {
        long long n,k;
        cin >> n >> k;
        long long a =n;
        long long b =1;
        if(n%2==0||k<(n+1)/2)
        b=mod(k,n);
        //else
        // b=mod(k,n)+1;
        else
        {
        k--;

        while(k--)
        {
            a--;
            a=mod(a,n);
            b++;
            b=mod(b,n);
            if(a==b)
            b=mod(b+1,n);
        }
        }
        cout << b << endl;
    }
}
