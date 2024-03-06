#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int j=0;j<n;j++)
        {
            a[j]=a[j];
        }
        ll finall=0;
        ll first=1e9,second=1e9;
        for(int i=0;i<n;i++)
        {  
            int bool1=0,bool2=0;
            if(a[i]<=first)
            {
                bool1=1;
            }
            else if(a[i]<=second)
            {
                bool2=1;
            }

            if(bool1==1&&bool2==0)
            {
                first=a[i];
            }
            else if(bool1==1&&bool2==1)
            {
                if(first<second)
                {
                    first=a[i];
                }
                else
                second=a[i];

            }
            else if(bool1==0&&bool2==1)
            {
                second=a[i];
            }
            else 
            {
                finall++;
                if(first<second)
                {
                    first=a[i];
                }
                else
                second=a[i];
            }
        }
        cout<<finall<<endl;
        }
    return 0 ;
}