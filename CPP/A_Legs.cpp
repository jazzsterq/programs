#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numtest;
    cin>>numtest;
    while(numtest--){
        int numlegs;
        cin>>numlegs;
        if(numlegs%4==0)
        {
            cout<<numlegs/4<<endl;continue;
        }
        else if((numlegs-2)%4==0)
        {
            cout<<(numlegs+2)/4<<endl;continue;
        }
    }
}