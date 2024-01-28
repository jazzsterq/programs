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
vector<vector<ll> > v;
ll mapp(ll item,ll check)
{
    ll n=v[check].size();
    for(ll i=0;i<n;i+=3)
    {
        ll dr=v[check][i];
        ll sr=v[check][i+1];
        ll rl=v[check][i+2];
        if(item>=sr&&item<=sr+rl-1)
        {
            return dr+item-sr;
        }
    }
    return item;
}
void solve()
{
    ll ans=INT_MAX;
        while(1)
        {
            string s;
            cin>>s;
            vector <ll> temp;
            ll flag=0;
            if(s[s.length()-1]==':')
            {
                while(1)
                {
                    ll a;
                    cin>>a;
                    if(a==-1)
                    {
                        v.pb(temp);
                        break;
                    }
                    if(a==-2)
                    {
                        v.pb(temp);
                        flag=1;break;
                    }
                    temp.pb(a);
                }
            }
            if(flag==1)
            break;
        }
     ll count=0;
    for(ll i=0;i<v[0].size();i+=2)
    {
        for(ll inpu=v[0][i];inpu<(v[0][i]+v[0][i+1]);inpu++)
        {
            ll input=inpu;
            rep(j,7)
            {
                input=mapp(input,j+1);
            }
            ans=min(ans,input);
            count++;
        }
    }
    cout<<ans;
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

        solve();


return 0 ;
}