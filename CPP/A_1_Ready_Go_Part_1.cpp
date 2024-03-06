#include <bits/stdc++.h>
#include <queue>
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
static ll tt=0;
void solve()
{
    ll r,c;
    cin >>r>>c;
    string s[r];
    int arr[r][c];
    rep(i,r)
    rep(j,c)arr[i][j]=0;
    ll count=0;
    rep(i,r)
    {
        cin>>s[i];
    }
    rep(i,r)
    {
        rep(j,c)
        {
            if(s[i][j]=='W'&&arr[i][j]==0)
            {

                vector <pair <int , int > >q;
                q.push_back(s[i][j]);
                arr[i][j]=1;
                while(!q.empty())
                {
                    char f=q.front();
                    if(i-1>=0&&j>=0)
                    if(arr[i-1][j]==0)
                    {
                        if(s[i-1][j]=='W')
                        {q.push(s[i-1][j]);
                        arr[i-1][j]=1;}
                        if(s[i-1][j]=='.')
                        count++;
                    }
                    if(i>=0&&j-1>=0)
                    if(arr[i][j-1]==0)
                    {
                        if(s[i][j-1]=='W')
                        {q.push(s[i][j-1]);
                        arr[i][j-1]=1;}
                        if(s[i][j-1]=='.')
                        count++;
                    }
                    if(i+1<r&&j>=0)
                    if(arr[i+1][j]==0)
                    {
                        if(s[i+1][j]=='W')
                        {q.push(s[i+1][j]);
                        arr[i+1][j]=1;}
                        if(s[i+1][j]=='.')
                        count++;
                    }
                    if(j+1<r)
                    if(arr[i][j+1]==0)
                    {
                        if(s[i][j+1]=='W')
                        {q.push(s[i][j+1]);
                        arr[i][j+1]=1;}
                        if(s[i][j+1]=='.')
                        count++;
                    }

                }
                

            }
            if(count<=1)
            {cout<<"YES";ce;return;}
        }
    }
    cout<<"NO";ce;
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
ll t;
    cin >> t;
    for(tt=1;tt<=t;tt++)
    {
        solve();
    }

return 0 ;
}