#include <iostream>
using namespace std;
int main()
{
    long long n , k;
    cin >> n >> k;
    long long count =1;
    while(k%2==0)
    {
        k=k/2;
        count++;
    }
    cout << count << endl;
}