/**
* author : jazzsterq
*/
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
 
typedef long long ll;
#define be begin()
#define en end()
#define pb push_back
#define mp make_pair
#define pyes cout << "Yes\n"
#define pno cout << "No\n"
#define print(x) cout<<x<<endl
#define prints(x) cout<<x<<" "
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
    ll summ=0,flag=0;
    vector<vector<ll> > v;
    while(1)
    {
        vll temp(21);
        rep(i,21)
        {
        cin>>temp[i];
        if(temp[i]==-9999)
        {
            flag=1;break;
        }
        }
        if(flag==1)break;
        v.pb(temp);
    }
    rep(l,v.size())
    {
        vector < vector <ll> > sum;
        sum.pb(v[l]);
        
        forf(i,1,21)
        {
            vll temp;
            flag=0;
            rep(j,21-i)
            {
                temp.pb((sum[i-1][j+1]-sum[i-1][j]));
                if((sum[i-1][j+1]-sum[i-1][j])!=0)
                flag=1;
            }
            sum.pb(temp);
            if(flag==0)break;
        }
        for(ll i=sum.size()-1;i>0;i--)
        {
            ll sz1=(sum[i-1].size()-1);
            ll sz2=(sum[i].size()-1);
            //cout<<sum[i-1][0];ce;
            sum[i-1].pb(sum[i-1][sz1]+sum[i][sz2]);
        }
        // rep(i,sum.size())
        // {
        //     rep(j,sum[i].size())
        //     {
        //         cout<<sum[i][j]<<" ";
        //     }ce;
        // }
        summ+=sum[0][21];
    }
    cout<<summ;

    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
        solve();
return 0 ;
}