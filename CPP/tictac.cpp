#include <iostream>
using namespace std;
int main()
{
    int t;
    ios:: sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    for(int q=1;q<=t;q++)
    {
        char a[3][3];
        int flag =0;
        for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        cin>>a[i][j];
        for(int i=0;i<3;i++)
        {
            if(a[i][0]==a[i][1]&&a[i][1]==a[i][2]&&a[i][0]==a[i][2]&&a[i][0]!='.')
            {
            flag =1;
            cout<<a[i][0]<<"\n";
            break;
            }
        }
        if(flag==0)
        {
            for(int i=0;i<3;i++)
            {
            if(a[0][i]==a[1][i]&&a[1][i]==a[2][i]&&a[0][i]==a[2][i]&&a[0][i]!='.')
            {
            flag =1;
            cout<<a[0][i]<<"\n";
            break;
            }
            }
        }
            if(flag==0)
            {
            if(a[0][0]==a[1][1]&&a[1][1]==a[2][2]&&a[0][0]==a[2][2]&&a[0][0]!='.')
            {
            flag =1;
            cout<<a[0][0]<<"\n";
            
            }
            }
            if(flag==0)
            {
            if(a[2][0]==a[1][1]&&a[1][1]==a[0][2]&&a[2][0]==a[0][2]&&a[2][0]!='.')
            {
            flag =1;
            cout<<a[1][1]<<"\n";
            
            }
            }
            if(flag==0)
            cout<<"DRAW"<<"\n";
        
    }
}