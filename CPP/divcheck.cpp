#include <iostream>
using namespace std;
int main()
{
    int dig ;
    long long mod = 0;
    long long mod10 =1;
    long long num;
    cout <<"ENTER the number to check divisibility from ";
    cin >>num;
    bool k=0;
    cout<<"ENTER the digits from the last ,enter -1 to exit ";
    do{
        cin>>dig;
        if(dig==-1)
        break;

        if(k!=0)
        mod10=(mod10*(10%num))%num;
        else 
        k=1;
        
        dig = dig%num;
        mod = (((dig*mod10)%num)+mod)%num;
        cout<<mod<<"  ";
    }while(1);
    if(mod==0)
    cout<<"DIVISIBLE";
    else
    cout<<"NOT DIVISIBLE";
}