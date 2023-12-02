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
    ll n;cin >>n;
    ll a[n];
    rep(i,n)
    cin>>a[i];
    sort(a,a+n);
    ll k;cin>>k;
    //rep(i,n)cout<<a[i]<<" ";ce;cout<<k;
    rep(i,k)
    {
        ll li , ri;double l,r;
        cin>>l>>r;
        l-=0.5;r+=0.5;
        ll left = -1,right=n;
        while(left+1<right)
        {
            ll mid=(left+right)/2;
            if(a[mid]>l)
            {
                right=mid;
                li=mid;
            }
            else
            {
                left=mid;
            }
        }
        left =-1,right=n;
        while(left+1<right)
        {
            ll mid=(left+right)/2;
           
            if(a[mid]>r)
            {
                right=mid;
            }
            else if (a[mid]<r)
            {
                left=mid;ri=mid;
            }
        }
        cout<<ri-li+1<<" ";
    }

    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

        solve();

return 0 ;
}