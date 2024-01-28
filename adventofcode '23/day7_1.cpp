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
vector <pair<string,ll> > v;
string level(string s)
{
    map <char,ll> m;
    rep(i,5)
    {
        m[s[i]]++;
    }
    bool is3=0;
    for(auto i: m)
    {
        if(i.se==3)
        is3=1;
    }
    if(m.size()==1)
    return ('7'+s);
    if(m.size()==2)
    {
        if(is3==1)
        return('5'+s);
        else
        return('6'+s);
    }
    if(m.size()==3)
    {
        if(is3==1)
        {
            return('4'+s);
        }
        else
        return('3'+s);
    }
    if(m.size()==4)
    return('2'+s);
    if(m.size()==5)
    return('1'+s);
    return NULL;

}
bool myComp(const pair <string,ll> s1,const pair<string,ll> s2)
{
    map <char,ll> m;
    rep(i,8)
    {
        m[(char)('2'+i)]=i+1;
    }
    m['T']=9;
    m['J']=10;
    m['Q']=11;
    m['K']=12;
    m['A']=13;
    ll a=s1.fi[0]-'0';
    ll b=s2.fi[0]-'0';
    if(a==b)
    {
        for(int i=1;i<=5;i++)
        {
            //cout<<m[s1.fi[i]]<<" "<<m[s2.fi[i]];ce;
            if(m[s1.fi[i]]<m[s2.fi[i]])
            return true;
            if(m[s1.fi[i]]>m[s2.fi[i]])
            return false;
        }
        //return false;
    }
    else
    return a<b;
}
void solve()
{
    while(1)
    {
        string s;
        cin>>s;
        ll n;
        cin>>n;
        if(s=="-1")
        break;
        v.pb(mp(s,n));
    }
    rep(i,v.size())
    {

        v[i].fi=level(v[i].fi);
    }
    sort(all(v),myComp);
    ll ans=0;
    rep(i,v.size())
    {
        ans+=v[i].se*(i+1);
      //  cout<<v[i].fi<<" "<<v[i].se;ce;
    }
    cout<<ans;
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
        solve();
return 0 ;
}