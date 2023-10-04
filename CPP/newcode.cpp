#include <iostream>
#include <string>
#include <vector> 
//#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector <int> n;
    int a;
    while(cin>>a)
    { 
        n.push_back(a);
    }

    for(int i=*n.end();i>=0;i--)
    {
        cout << n[i];
    }
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