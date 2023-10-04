#include <iostream>
#include <string>
#include <vector> 
//#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];  
    int max=0;
    int count =1;     
    int count2 =1;
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[0])
        count =0;
        if(a[i]>a[max])
        {max=i;
        count2=0;
        }
        if(a[i]==a[max])
        count2++;
    }
    if(count==1)
    cout<<-1<<endl;
    else
    {
        cout<< n-count2<<" "<<count2<<endl;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=a[max])
            cout << a[i]<<" ";
        }
        cout<<endl;
        while(count2--)
        cout << a[max]<<" ";
        cout << endl;
    }

    return;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}