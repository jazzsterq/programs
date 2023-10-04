#include <bits/stdc++.h>
using namespace std;
template <typename PB>
#define ll long long int
#define be begin()
#define en end()
#define pb push_back
#define pyes cout << "Yes\n"
#define pno cout << "No\n"
#define ce cout << '\n'
#define endl '\n'
#define rev(v) reverse(v.begin(), v.end())
#define srt(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()
#define mnv(v) *min_element(v.begin(), v.end())
#define mxv(v) *max_element(v.begin(), v.end())
#define fi first
#define se second
#define vll vector<ll>
#define vp vector<pair<ll,ll>>
#define trav(v) for (auto it = v.begin(); it != v.end(); it++)
#define rep(i, n) for (ll i = 0; i < n; i++)
const ll mod = 1e9 + 7;

void solve(){

}

 int main(){
     ll t,z;
     cin>>t;
     vp v,a;
     while(t--){
        ll x,y;
        cin>>x>>y;
       v.pb(make_pair(x,y));
     }
     srt(v);
     ll one=0,two=0;
     for(ll i=0;i<v.size();i++){
        if(v[i].se==1){
            one++;
        }
        else{
            two++;
        }
        a.pb(make_pair(one,two));
     }
     for(ll i=a.size()-1;i>=0;i--){
        if(a[i].fi>2*a[i].se){
            z=i;
            break;
        }
     }
     ll sum=1000000000+a[z].fi+2*(a[a.size()-1].se-a[z].se);
     cout<<sum<<endl;
 }