/**
* author : jazzsterq
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define be begin()
#define en end()
#define pb push_back
#define mp make_pair
#define pyes cout << "YES\n"
#define pno cout << "NO\n"
#define ce cout << '\n'
#define print(x) cout<<x<<endl
#define prints(x) cout<<x<<" "
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
#define MOD 1000000007

/*ll gcd(ll a, ll b) {if (!a || !b)return a | b;
unsigned shift = __builtin_ctz(a | b);
a >>= __builtin_ctz(a);
do {
b >>= __builtin_ctz(b);
if (a > b)
swap(a, b);
b -= a;
} while (b);
return a << shift;
}*/

void solve()
{
    ll n,k;cin>>n;cin>>k;
    vll a(n);
    rep(i,n)
    cin>>a[i];
    if(k>=3)
    {
        cout<<0;ce;return;
    }
    if(k==1)
    {
        ll ans=a[0];
        rep(i,n)
        {
            ans=min(ans,a[i]);
        }
        ll ans2=a[0];
        rep(i,n)
        {
            rep(j,n)
            {
                if(i!=j)
                {
                    ans2=min(ans2,abs(a[i]-a[j]));
                }
            }
        }
        cout<<min(ans,ans2);ce;return;
    }
    if(k==2)
    {
        ll ans=a[0];
        rep(i,n)
        {
            ans=min(ans,a[i]);
        }
        ll ans2=a[0];
        vll v;
        rep(i,n)
        {
            rep(j,n)
            {
                if(i!=j)
                {
                    ans2=min(ans2,abs(a[i]-a[j]));
                    v.pb(abs(a[i]-a[j]));
                }
            }
        }
        // set <ll> s;
        // rep(i,n)
        // {
        //     rep(j,n)
        //     {
        //         if(i!=j)
        //         {
        //             s.insert(abs(a[i]-a[j]));
        //         }
        //     }
        // }
        // set<ll> :: iterator it=s.begin();
        
        ll ans3=a[0];
         
        sort(all(a));
        sort(all(v));
    
        // ll j1=0,j2=0;
        // rep(i,a.size()+v.size())
        // {
        //     if(a[j1]>=v[j2])
        //     {
        //         j2++;
        //     }
        //     else
        //     {
        //         j1++;
        //     }
        //     //if(j1<a.)
        //     ans3=min(ans3,abs(v[j2]-a[j1]));

        // }
        rep(i,v.size())
        {
            // ll left=-1,right=a.size();
            // while(left+1<right)
            // {
            //     ll mid = left+ (right-left)/2;
            //     if(a[mid]<v[i])
            //     {
            //         left=mid;
            //     }
            //     else
            //     right=mid;
            // }
            ll lb = lower_bound(all(a),v[i])-a.begin();
            if(lb<n)ans3=min(ans3,a[lb]-v[i]);
            if(lb>0)ans3=min(ans3,v[i]-a[lb-1]);
           
        }

        cout<<min(min(ans,ans2),ans3);ce;
    }

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