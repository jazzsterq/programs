#include <bits/stdc++.h>
#include <chrono>
#include <map>
#include<iostream>
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
#define yess cout<<"Case #"<<p<<": YES"<<endl
#define noo cout<<"Case #"<<p<<": NO"<<endl
#define forb(i, s, e) for (ll i = s; i >= e; i--)

void solve()
{
    ll n;
    cin>>n;
        if(n%3!=0)
        {
            if(n-3<=0||n-3==1||n-3==2)
            {
                cout<<"NO";ce;
                return;
            }
            else
            {
                cout<<"YES";ce;
            cout<<"1 2 "<<n-3<<endl;
            }
        }
        else
        {
             if(n-5<=0||n-5==1||n-5==4)
            {
                cout<<"NO";ce;
                return;
            }
            else
            {
                 cout<<"YES";ce;
            cout<<"1 4 "<<n-5<<endl;
            }
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