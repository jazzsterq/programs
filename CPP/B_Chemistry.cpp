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
    ll n,k;cin>>n>>k;
    string s;
    cin>>s;
    int a[26];
    rep(i,26)a[i]=0;
    rep(i,n)
    {
        a[s[i]-'a']++;
    }
    ll countodd=0;ll sum=0;
    rep(i,26)
    {
        if(a[i]%2!=0)
        countodd++;
    }
    rep(i,26)
    {
        if(a[i]%2!=0&&k>0)
        {
            k--;
            a[i]--;
            countodd--;
        }
        sum+=a[i];
    }
    if(countodd>1)
    {cout<<"NO";ce;return;}
    if(k==0)
    {
        cout<<"YES";ce;return;
    }
    if(k%2==0)
    {cout<<"YES";ce;return;}
    else
    {
        cout<<"YES";ce;return;
    }










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







    if(countodd-k>1&&countodd>k)
    {
         cout<<"NO";ce;return;
    }

    else
    {
        cout<<"YES";ce;return;
    }





    ll countodd=0;ll sum=0;
    sort(a,a+26);
    rep(i,26)
    {
        if(a[i]%2!=0&&k>0)
        {
            k--;
            a[i]--;
        }
        sum+=a[i];
    }
    rep(i,26)
    {
        if(a[i]%2!=0)
        countodd++;
    }

    if(countodd>1)
    {
        cout<<"NO";ce;return;
    }
    if(countodd==0)
    {
        if(k==0)
        {
            cout<<"YES";ce;return;
        }
        if(sum>=k)
        {
            if(k%2==0)
            {cout<<"YES";ce;return;}
            else
            {
                cout<<"NO";ce;return;
            }
        }

    }
    if(countodd==1)
    {
        if(k==0)
        {
            cout<<"YES";ce;return;
        }
        if(sum>=k)
        {
            if(k%2!=0)
            {cout<<"YES";ce;return;}

        }
        else
            {
                cout<<"NO";ce;return;
            }

    }
    cout<<"NO";ce;return;







    int i=0;




    while(k!=0)
    {
        if(a[i]<=k&&a[i]!=0)
        {
            k-=a[i];
            a[i]=0;
        }
        if(a[i]>k&&a[i]%2!=0)
        {
            k--;a[i]--;
        }

        i++;i=i%26;
    }
    rep(i,26)
    {
        if(a[i]<=k&&k>0)
        {
            k-=a[i];
            a[i]=0;
        }
    }
    if(k>0&&k%2!=0)
    {

    }

    return;*/