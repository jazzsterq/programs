//#include <bits/stdc++.h>
#include <chrono>
#include<iostream>
#include<vector>
#include<climits>
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
    ll m , k ,a1,ak;
    cin >>m >> k >> a1>>ak;
        m-=(min(ak,m/k)*k);
        if(m<=0)
        cout<<0<<endl;
        else 
        {
            if(m<a1)
            {
                cout <<0<<endl;
                return;
            }
            ll minn=INT_MAX;
            for(int i=0;i<=a1;i++)
            {
                minn=min(((m-i)/k)+((m-i)%k),minn);
            }
            cout<<minn<<endl;
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
}\
code 
#include <iostream> 
int main ()
{
    for(int i=0;i<n;i++)
    {
        cout << " O fpmy eamy yp ;rabr upi [;radr dyau bravl o a, kidy dp ,akl;gaef gdfdsdfgdfg bsg bsghs  f 
        jo oyd ,r smf ,u bibor o fpmy lmpe ejsy yp fp oyd kidy dp jstf o s, dp vpmfivrd oyd ,u gsi;y O lmpe niy  h srky ejsy O fvsm  lfp   f g 4 2 w]"
    }
}