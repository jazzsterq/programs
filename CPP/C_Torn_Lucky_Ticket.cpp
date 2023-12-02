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
    ll n;cin >>n;
    vector< string> s(n);
    rep(i,n)
    {cin>>s[i];
    }
    vector<vector<string> > v(6);
    rep(i,n)
    {
        if(s[i].length()==1)
        {
            v[1].pb
        }
        else
        

    }

    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
        solve();
return 0 ;
}








// #include <bits/stdc++.h>
// #include <chrono>
// #include<iostream>
// #include <map>
// #include<vector>
// using namespace std;
// #pragma GCC optimize("O3")
// #pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
 
// typedef long long ll;
// #define be begin()
// #define en end()
// #define pb push_back
// #define pyes cout << "Yes\n"
// #define pno cout << "No\n"
// #define ce cout << '\n'
// #define endl '\n'
// #define rev(v) reverse(v.begin(), v.end())
// #define srt(v) sort(v.begin(), v.end())
// #define all(v) v.begin(), v.end()
// #define mnv(v) *min_element(v.begin(), v.end())
// #define mxv(v) *max_element(v.begin(), v.end())
// #define fi first
// #define se second
// #define deb(x) cout << #x << "=" << x << endl
// #define vll vector<ll>
// #define vp vector<pair<long long, long long> >
// #define trav(v) for (auto it = v.begin(); it != v.end(); it++)
// #define rep(i, n) for (ll i = 0; i < n; i++)
// #define forf(i, a, b) for (ll i = a; i < b; i++)
// #define forb(i, s, e) for (ll i = s; i >= e; i--)
// ll ncr(ll a)
// {
//     if(a>1)
//     return (a*(a-1));
//     else 
//     return 0;
// }
// void solve()
// {
//     ll n;cin>>n;

//     vector <pair<ll,string> > s(n);
//     rep(i,n)
//     {
//         cin>>s[i].second;
//         s[i].first=0;
//     }
//     vector<pair<ll,pair<ll,ll> > > ans(50,make_pair(0,make_pair(0,0)));
//     rep(i,n)
//     {
//         rep(j,s[i].second.length())
//         {
//             s[i].first+=(ll)(s[i].second[j]-'0');
            
//         }
//         ans[s[i].first].first++;
        
//         if(s[i].second.length()%2==0)
//         ans[s[i].first].second.first++;
//         else
//         ans[s[i].first].second.second++;
//     }
//     //sort(s.begin(),s.end());
//     rep(i,50)
//     {
//         if(ans[i].first>0)
//     cout<<i<<" "<<ans[i].first<<" "<<ans[i].second.first<<" "<<ans[i].second.second<<endl;
    

//     }
//     //ll ans=0;ll j=0;
//     ll ansf=0;
//     rep(i,50)
//     {
//         // if(s[i].first==s[i+1].first&&s[i].second.length()%2==(s[j].second.length()%2))
//         // {
//         //     ans++;
//         // }
//         ll e=ans[i].second.first;
//         ll o=ans[i].second.second;

//         if(ans[i].first>=1)
//         {
//             ansf+=ncr(o);//oc2+ec2;
//             ansf+=ncr(e);
//             ansf+=ans[i].first;
//             //cout<<ansf;ce;
//         }
//         //else if(ans[i].first==1)
//         //ansf++;

//     }
//     cout<<ansf;ce;
//     return;
// }

// int main(){

// ios_base::sync_with_stdio(false);
// cin.tie(NULL); cout.tie(NULL);
//         solve();
// return 0 ;
// }