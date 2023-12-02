#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define be begin()
#define en end()
#define pb push_back
#define pyes cout << "YES\n"
#define pno cout << "NO\n"
#define ce cout << '\n'
#define endl '\n'
#define rev(v) reverse(v.begin(), v.end())
#define srt(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()
#define mnv(v) *min_element(v.begin(), v.end())
#define mxv(v) *max_element(v.begin(), v.end())
#define fi first
#define se second
#define deb(x) cout << #x << "=" << x << endl
#define vll vector<ll>
#define vp vector<pair<long long, long long> >
#define trav(v) for (auto it = v.begin(); it != v.end(); it++)
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)

void solve()
{
    ll n;cin>>n;
    ll a[n];
    ll ans=0;
    rep(i,n)
    {
        cin>>a[i];
    }
    ll pp=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]<=a[i-1])
        {
            ll chk;
            chk=ceil(a[i-1]/(double)a[i]);
            ll temp=1;
            //int ppo=0;
            while(chk>temp)
            {
               temp*=2;
               pp++;
            }

            ans+=pp;
           // cout<<pp;ce;
        }
        if(a[i]>a[i-1])
        {
            double temp1=a[i];double temp2=a[i-1];

            int ppo=0;
            while(temp1/2.0>=temp2)
            {
                temp1=temp1/2.0;
               ppo++; 
            }
            if(pp-ppo>0)
            {
            ans+=pp-ppo;
            pp=pp-ppo;}
            else 
            pp=0;
           // cout<<pp-ppo;ce;
        }
    }
    cout<<ans<<endl;
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

return 0 ;
}