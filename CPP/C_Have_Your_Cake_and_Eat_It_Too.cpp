//jazz1234
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
    for (int i = 0; i < (int)a.size(); i++)
    {
        cout << a[i] << " ";
    }
    ce;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
ll t;
    cin >> t;
    while(t--){
       ll n;
    cin>>n;
    vvll a(n,vll(3));
    ll tot=0;
    rep(i,n)
    {
        cin>>a[i][0];
        tot+=a[i][0];
    }
    ll total=0;
    rep(i,n)
    {
        cin>>a[i][1];
        total+=a[i][1];
    }
    if(tot!=total)continue;
    rep(i,n)
    {
        cin>>a[i][2];
    }
    ll chk=tot/3+(1*(tot%3!=0));
    vector<int> b(3);
    iota(all(b),0);
    ll flag=0;
    do{
        ll sum=0,j=0;
        vll ans;
        ans.push_back(1);
        rep(i,n)
        {
            sum+=a[i][b[j]];
            if(sum>=chk&&ans.size()<=4)
            {
                j++;
                sum=0;
                ans.push_back(i+1);
                ans.push_back(i+2);
            }
        }
        if(sum>=chk)
        {
            ans.push_back(n);
        }
        if(ans.size()==6)
        {

            vll anss(6);
            ll k=0;
            rep(i,3)
            {
                anss[2*b[i]]=ans[k++];
                anss[2*b[i]+1]=ans[k++];
                //cout<<2*b[i];ce;
            }
            vout(anss);
            flag=1;
            break;
        }
    }while(next_permutation(all(b)));
    if(flag!=1)
    print(-1);
    }

return 0 ;
}
