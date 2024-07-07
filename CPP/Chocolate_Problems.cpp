#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MODN=1e9+7;
ll fact(ll val){
    ll ans=1;
    for(ll i=1;i<val+1;i++){
        ans*=i%MODN;
    }
    return ans;
}
ll power(ll x, ll y, ll p) {
    ll res = 1;
    x = x % p;
    while (y > 0) {
        if (y & 1) res= (res * x) % p;
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

int main(){
    ll k,n;
    cin>>n>>k;
    ll ans=fact(n-1);
    ll den=(fact(k-1)*fact(n-k));
    ans=(ans*power(den,MODN-2,MODN))%MODN;
    cout<<ans;
}