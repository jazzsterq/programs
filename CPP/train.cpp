#include <bits/stdc++.h>
#include <chrono>
#include<iostream>
#include<vector>
#include <map>
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
    ll n,k;
    cin>>n>>k;
    vector< pair<ll,ll> > u(n);
    rep(i,n)
    {
        cin >> u[i].first;
        u[i].second=i+1;
    }
    map <ll,ll> v;
    sort(u.begin(),u.end());
    int count =0;
    rep(i,n-1)
    {   
        if(u[i].first==u[i+1].first&&count==0)
        {
            v[u[i].first]=u[i].second;
            count=1;
        }
        if(u[i].first!=u[i+1].first&&count==1)
        {
            v[-(u[i].first)]=u[i].second;
            count=0;
        }
        if(u[i].first!=u[i+1].first&&count==0)
        {
            v[u[i].first]=u[i].second;
            count=0;
        }

    }
    v[u[n-1].first]=u[n-1].second;
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout << it-> first <<"  "<<it->second<<endl;
    }
    while(k--)
    {
        ll a, b;
        cin >> a >> b;
        if(v[a]<=v[b])
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
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
/*
 multimap <ll,ll> u;
    rep(i,n)
    {
        ll a;
       cin>> a;
       if(u.find())
        u.insert(pair<ll,ll>(a,i+1));
    }
    while(k--)
    {
        ll a,b;
        cin >>a>>b;
        auto it1=u.equal_range(a);
        auto it2=u.equal_range(b);
        int count =0;
        ll minn=INT_MAX,maxx=INT_MIN;
        for(auto itl=it1.first;itl!=it1.second;itl++)
        {
            minn=min(minn,itl->second);
        }
            for(auto itl2=it2.first;itl2!=it2.second;itl2++)
            {
                maxx=max(maxx,itl2->second);
            }
        
        if(minn<=maxx)
        cout<<"YES";
        else
        cout<<"NO";
        ce;

    }
*/