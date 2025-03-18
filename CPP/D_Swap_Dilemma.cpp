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

#ifndef ONLINE_JUDGE
#include "debug.cpp"
#define debug(x...)               \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define debug(x...)
#endif

template<typename R>
void vin(vector<R> &a)
{
    for (ll i = 0; i < (ll)a.size(); i++)
    {
        cin >> a[i];
    }
}
 
template <typename T>
void vout(vector<T> a)
{
    for (ll i = 0; i < (ll)a.size(); i++)
    {
        cout << a[i] << " ";
    }
    ce;
}

const ll MAXN=100001;
const ll MODN= 1e9 + 7;
ll mac(std::vector<ll>& array, ll left, ll mid, ll right) {
    ll i = left;       
    ll j = mid + 1;    
    ll k = 0;          
    std::vector<ll> temp(right - left + 1);
    ll inversions = 0;

    while (i <= mid && j <= right) {
        if (array[i] <= array[j]) {
            temp[k++] = array[i++];
        } else {
            temp[k++] = array[j++];
            inversions += (mid - i + 1); 
        }
    }
    while (i <= mid) {
        temp[k++] = array[i++];
    }

    while (j <= right) {
        temp[k++] = array[j++];
    }

    for (i = left, k = 0; i <= right; ++i, ++k) {
        array[i] = temp[k];
    }
    rep(i,3){}
    return inversions;
}

ll msc(std::vector<ll>& array, ll left, ll right) {
    ll inversions = 0;
    if (left < right) {
        ll mid = left + (right - left) / 2;

        inversions += msc(array, left, mid);
        inversions += msc(array, mid + 1, right);
        inversions += mac(array, left, mid, right);
    }
    rep(i,3){}
    return inversions;
}
void solve()
{
    ll n;
    cin>>n;
    vll a(n),b(n);vin(a);vin(b);
    ll c2=msc(b, 0, a.size() - 1);
    ll c1=msc(a, 0, a.size() - 1);
    sort(all(a));srt(b);
    rep(i,n)if(a[i]!=b[i]){pno;return;}
    if(c1%2==c2%2)pyes;
    else pno;
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
