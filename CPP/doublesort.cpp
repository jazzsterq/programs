#include <iostream>
using namespace std;

int main ()
{
    int t ;
    cin >> t ;
    while (t--)
    {
        int n ;
        cin >> n;
        int a[n];
        int b[n];           
        int count =0;
        for(int i=0;i<n;i++)
        cin >> a[i];
        for(int j=0;j<n;j++)
        cin >> b[j];
        for(int i=0;i<n;i++)
        {
            int mina = i;
            int minb = i;

            for(int j=i+1;j<n;j++)
            {
                if(a[mina]>=a[j])
                {
                    mina=j;
                }
                if(b[minb]>=b[j])
                {
                    minb=j;
                }

            }
            if(mina==minb)
            {
                if(mina!=i)
                {
                int temp = a[mina];
                a[mina]=a[i];
                a[i]=temp;
                temp = b[mina];
                b[mina]=b[i];
                b[i]=temp;
                count++;
                cout << mina+1 <<" "<<i+1<< endl;
                }
                else{continue;}
            }
            else
            {
                count =-1;
                break;
            }
            
        }
        if(count <=10000)
        cout << count << endl;
        else
        cout << -1 << endl;

    }
}