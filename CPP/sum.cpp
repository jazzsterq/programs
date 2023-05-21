#include <iostream>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,sum;
    cin>> n;
    for(int i=n;i>=1;i--)
    {
        sum=0;
            for(int j=i;j>0;)
            {
                if((sum+j)>n)
                {
                    j--;
                }
                else if((sum+j)==n)
                {
                    cout<<j;
                    break;
                }
                else{
                sum+=j;
                cout<<j <<" ";
                }
            
            }
            cout<<endl;

        }
    }
