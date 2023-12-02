#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
typedef long long ll;
#define fi first
#define se second
#define srt(vect) sort(vect.begin(),vect.end())
#define forf for(int i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define v vector<long long>
#define vp vector<pair<long long, long long> >
int main(){
    int t;
    cin>>t;
    while(t--){
     ll n;
     cin>>n;
     ll arr[n];
     forf{cin>>arr[i];}
     int val = arr[0];
     int start=0;
     int i=0;
     int j =1;
     v vect;
     if(n!=1){
     while (start<n)
     {
       i=start;
       j= start+1;
       if(start==n-1){vect.pb(arr[start]);break;}
       else{
       if(i<n && j<n && arr[j]>=arr[i]){
       while(i<n && j<n && arr[j]>=arr[i]){
        i=j;
        j++;
        if(j>=n){break;}
       }
       if(arr[start]!=arr[i]){
        vect.pb(arr[start]);
        }
        vect.pb(arr[i]);
        start=j;
       }
        else if(i<n && j<n && arr[j]<=arr[i] ){
             while(j<n && i<n && arr[j]<=arr[i]){
        i=j;
        j++;
         if(j>=n){break;}
       }
       if(arr[start]!=arr[i]){
        vect.pb(arr[start]);
        }
        vect.pb(arr[i]);
        start=j;
        }
        if(j>=n){break;}
       }
     }
     }
     if(n==1){cout<<1;}
     else{
     cout<<vect.size();
     }
     cout<<endl;
    }
    return 0;
}