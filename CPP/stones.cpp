#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string s ;
    cin >> s;
    int arr[s.length()];
    int count =2;
    arr[0]=1;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]=='l')
        {
            arr[i+1]=arr[i];
            arr[i]=count;
            count++;
        }
        else
        {
            arr[i+1]=count;
            count++;
        }
    }
    for(int i=0;i<s.length();i++)
    cout << arr[i] <<endl;

}