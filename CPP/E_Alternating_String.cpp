/**
   author : jazzsterq
  ⠀⠀⠀⠐⢀⣠⣤⣴⣶⣶⣦⣤⣀⣤⣤⣤⠀⠀⠀⠀⠀⠀⠀⠀
  ⠀⠙⢁⣴⠿⣿⣉⣿⣿⠿⠿⣿⣿⣿⣏⢻⠀⠀⠀⠀⠀⠀⠀⠀
  ⠀⢰⣿⡿⢸⣿⣿⣿⣿⣄⣠⣿⣿⣿⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀
  ⢀⣿⣿⣷⣾⣿⣿⣿⣿⠋⠉⣿⣿⣏⢙⣿⣧⠀⠀⠀⠀⠀⠀⠀
  ⢸⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀
  ⠈⣿⣿⣿⡟⠀⠀⢈⣿⠀⠀⣿⣿⡿⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀
  ⠀⠘⣿⣿⣇⠀⠙⠛⠋⠀⢀⣿⡿⢰⣿⡿⠁⠀⠀⠀⠀⠀⠀⠀
  ⠀⠂⠈⠻⣿⣷⣤⣤⣤⣴⣿⣿⣷⡾⠋⠀⠘⠀⠀⠀⠀⠀⠀⠀
  ⠀⠀⠀⠀⠀⠉⠛⠛⠿⠿⠛⠋⠉⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
*/
#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#ifdef __x86_64__
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
#endif
using namespace std;
typedef long long ll;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> indexed_multiset;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define INF 1000000000000000000
#define sz(x) static_cast<ll>((x).size())
#define pyes cout << "YES\n"
#define pno cout << "NO\n"
#define print(x) cout<<x<<endl
#define prints(x) cout<<x<<" "
#define ce cout << '\n'
#define endl '\n'
#define rev(v) reverse(v.begin(), v.end())
#define srt(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()
#define mnv(v) *min_element(v.begin(), v.end())
#define mxv(v) *max_element(v.begin(), v.end())
#define deb(x) cout << #x << "=" << x << endl
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define vp vector<pair<long long, long long> >
#define pp pair<ll, ll>
#define trav(v) for (auto it = v.begin(); it != v.end(); it++)
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)

void solve()
{
    ll n;
    cin>>n;
    vll a(n),b(n);
    cout<<n;
    rep(i,n){
        cin>>a[i]>>b[i];
    }
    double start=-1,end=1e9;
    function <int(double)> check = [&](double speed){
        rep(i,n){
            double time = (i)/speed;
            if(!(time>=a[i]&&time<=b[i]))
            {
                return 0;
            }
        }
        return 1;
    };
    while(1)
    {
        double mid=start+(end-start)/2.0;
        if(check(mid)){
            end=mid;
        }
        else start= mid;
    }
    print(end);
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
ll t;
    cin >> t;
    while(t--){
        solve();
    }

return 0 ;
}
