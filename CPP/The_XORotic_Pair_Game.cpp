
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    ll ans=1;
    while(n>0)
    {
        if(n%2==0&&(__builtin_popcountll(n))>1){
            ans*=2;
        }
        n=n>>1;
    }
    cout<<ans<<endl;
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
