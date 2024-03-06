#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long fact =1;
    long long count =0;
    for(int i=n;i>0;)
    {
       if(i%5==0)
       {

        int temp =i;
        while(temp%5==0)
        {
            count++;
            temp=temp/5;
        }
        i-=5;
       }
       else
       i--;
       
    }
    
    cout << count;
}