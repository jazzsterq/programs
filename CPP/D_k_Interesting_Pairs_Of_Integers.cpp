#include <bits/stdc++.h>
#include <chrono>
#include<iostream>
#include <map>
#include<vector>
using namespace std;
#pragma GCC optimize("O3")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
 
typedef long long ll;
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
#define deb(x) cout << #x << "=" << x << endl
#define vll vector<ll>
#define vp vector<pair<long long, long long> >
#define trav(v) for (auto it = v.begin(); it != v.end(); it++)
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)

void solve()
{
    ll n,k;cin>>n>>k;
    vector <ll> v(10001,0);
    rep(i,n)
    {
        ll a;cin>>a;
        v[a]++;
    }

    ll countmax=0;
    rep(i,10001)
    {
        if(v[i]!=0)
        {
        for(ll j=i+1;j<10001;j++)
        {
            if(v[j]!=0)
            {
            ll ans=i^j;
            bitset <20> b(ans);
            //cout<<b;ce;
            if(b.count()==k)
            countmax+=v[i]*v[j];
            }
        }
        if(v[i]>1&&k==0)
        {
            countmax+=((v[i]-1)*v[i])/2;
        }
        }
    }
    cout<<countmax;
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
        solve();
return 0 ;

}
