#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=0;i<32;i++)
    {
        bitset<5> b(i);
        cout<<5<<endl;
        for(int j=4;j>=0;j--)
        cout<<b[j]<<" ";cout<<endl;
    }
}