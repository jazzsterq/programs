#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,m;cin>>n>>m;
    vector<vector<char>> a(n,vector<char>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    if(m%3==0)
    {
        for(int j=1;j<m;j+=3){
        for(int i=0;i<n;i++)
        {
            a[i][j]='X';
        }
        if(j+3<m)
        {
            int flag = 0;
            if(n==1||(a[1][j+1]!='X'&&a[1][j+2]!='X'))flag = 0;
            else flag = 1;
            a[flag][j+1]='X';
            a[flag][j+2]='X';
        }
        }
    }
    else
    {
        for(int j=0;j<m;j+=3){
        for(int i=0;i<n;i++)
        {
            a[i][j]='X';
        }
        if(j+3<m)
        {

           int flag = 0;
            if(n==1||(a[1][j+1]!='X'&&a[1][j+2]!='X'))flag = 0;
            else flag = 1;
            a[flag][j+1]='X';
            a[flag][j+2]='X';
        }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j];
        }cout<<endl;
    }
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
ll t;
    cin >> t;
    while(t--){
        solve();
    }

return 0 ;
}
