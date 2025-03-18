#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,q;
    cin>>n>>q;
    vector<ll> days(q);
    for(int i=0;i<q;i++) cin>>days[i];
    ll change=n-1;
    for(int i=0;i<n-1;i++){
        cout<<i+1<<" "<<i+2<<endl;
    }
    for(int i=0;i<q;i++){
        if (change!=days[i])
        {
            cout<<n<<" "<<change<<" "<<days[i]<<endl;
            change=days[i];
        }else
        {
            cout<<"-1 -1 -1"<<endl;
        }
        
        
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