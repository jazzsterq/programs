#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define be begin()
#define en end()
#define pb push_back
#define pyes cout << "YES\n"
#define pno cout << "NO\n"
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
 
    vector <int> v= {4,8,15,16,23,42};
    vll prod(4);
    cout<<"? 1 2";ce;cout<<flush;
    cin>>prod[0];
    cout<<"? 2 3";ce;cout<<flush;
    cin>>prod[1];
    cout<<"? 3 4";ce;cout<<flush;
    cin>>prod[2];
    cout<<"? 4 5";ce;cout<<flush;
    cin>>prod[3];
    while(1)
    {
        ll flag =0;
        rep(i,4)
        {
            if(v[i]*v[i+1]!=prod[i])
            {
                flag=1;break;
            }
        }
        if(flag==0)
        {
            cout<<"! ";
            rep(i,6)
            {
                cout<<v[i]<<" ";
            }ce;cout<<flush;break;
        }
        else
        {
            next_permutation(all(v));
        }
    }
 
    return;
}
 
int main(){
 
ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
 
        solve();
 
return 0 ;
}