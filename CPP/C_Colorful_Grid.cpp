#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
    if(k<n+m-2||(n+m+k)%2!=0)
    {
        cout<<"NO"<<"\n";
        return;
    }
    cout<<"YES"<<"\n";
    for(int j=0;j<m-1;j++)
    {
        if(!(j%2))
            cout<<"B ";
        else
            cout<<"R ";
    }
    cout<<"\n";
    for (int i=1;i<(n-1);i++)
    {
        for(int j=0;j<m-1;j++)
        {
            if(!((n+m)%2))
                cout<<"R ";
            else
                cout<<"B ";
        }
        cout<<"\n";
    }
    for(int j=0;j<m-1;j++)
    {
        if(!((n+j)%2))
            cout<<"R ";
        else
            cout<<"B ";
    }
    cout<<"\n";
    for(int i=0;i<n-1;i++)
    {
        if(!(i%2))
            cout<<"B ";
        else
            cout<<"R ";
        for(int j=1;j<(m-1);j++)
        {
            if(!((n+m)%2))
                cout<<"B ";
            else
                cout<<"R ";
        }
        if(i!=(n-2))
        {
            if(!((m+i)%2))
                cout<<"R ";
            else
                cout<<"B ";
        }
        else
        {
            if(!((n+m)%2))
                cout<<"B ";
            else
                cout<<"R ";
        }
        cout<<"\n";
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