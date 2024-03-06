#include <iostream>
#include <string>
#include <vector> 
#include <utility>
#include <climits>
//#include<bits/stdc++.h>
using namespace std;
 
void solve(){
 
    int n ,k;
    cin >> n >> k;
    vector <pair<int,int> > v(n);
    for(int i=0;i<n;i++ )
    cin >> v[i].first;
    for(int i=0;i<n;i++ )
    cin >> v[i].second;
    sort(v.begin(),v.end());
    while(1)
    {
        int count=0;
        int min =INT_MAX;
        
        for(int i=0;i<n;i++)
        {
            v[i].first-=k;
            if(v[i].first>0)
            {
                if(v[i].second<min)
                min =v[i].second;
                count++;
                cout <<min;
            }    
        }
        cout << count << " " << k<<" "<<min;
        k=k-min;
        if(count==0)
        {
            cout << "YES" << "\n";
            break;
        }
        else if (k<=0 ||min ==0)
        {
            cout <<"NO"<<"\n";
        break;}
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