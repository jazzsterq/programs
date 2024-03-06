#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
       int ptr=2;
       if(n==2||n==3)
       {
       cout << "NO SOLUTION";
       return 0;
       }
        for(int i=0;i<n;i++)
        {
            if(ptr>n)
            ptr = 1;
            cout << ptr << " ";
            ptr+=2;
        }

    }
