#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    ll value =a[0];
    vector<ll>  prefix,postfix;
    for(int i=0;i<n;i++)prefix.push_back(a[i]+n-(i+1));
    for(int i=0;i<n;i++)postfix.push_back(a[i]+i);
    ll mxval = prefix[0];
    for(int i=1;i<n;i++)prefix[i]=max(prefix[i],prefix[i-1]);
    for(int i=n-2;i>=0;i--)postfix[i] =max(postfix[i],postfix[i+1]);
    for(int i=0;i<n;i++)
    {
        if(i==0 && i!=n-1){
        value = max(a[i],postfix[i+1]);
        }
        else if (i!=n-1){
        value = min(value,max(max(a[i],prefix[i-1]),postfix[i+1]));
        }
        else if(i!=0){
        value = min(value,max(prefix[i-1],a[i]));
        }
    }
    cout<<value;
    return 0 ;
}