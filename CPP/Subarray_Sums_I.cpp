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
    ll n,x;
    cin >> n >> x;
    ll a[n];
    rep(i,n)
    {
        cin>>a[i];
    }ll count=0;
    ll b[n];
    ll sum=0;
    ll k=0;
    rep(i,n)
    {
       sum+=a[i];
       b[i]=sum;
    }

    rep(i,n)
    {
        if(b[i]==x)
        {
            count++;
            continue;
        }
        if(b[i]>x)
        forf(j,k,i)
        {
           // cout<<b[i];ce;
            if(b[i]-b[j]==x)
            {
                count++;break;
            }
            if(b[i]-b[j]<x)
            break;
            k++;
        }
    }
    cout<<count;ce;
    return;

}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
        solve();

return 0 ;
}