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
    vector <long long > a(n),b(n);
    rep(i,n)
    {
        cin>>a[i];
    }
    rep(i,n)
    {
        cin>>b[i];
    }
    sort(all(a));
    sort(b.begin(),b.end());
    ll flag=0;
    rep(i,n)
    {
        if(a[i]>b[i])
        {flag=1;break;
        }
    }
    if(flag==1)
    {
        cout<<"NO";ce;return;
    }ll count=0;
    rep(i,n-1)
    {
        if(a[i]==a[i+1])
        {
            count=2;
            int j=0;
            for( j=i+2;j<n;j++)
            {
                if(a[j]==a[i])
                count++;
                else
                break;
            }
            if((count*2)>(n+1))
            {
                cout<<"NO";ce;return;
            }
            i=j-1;
        }
    }
    cout<<"YES";ce;
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