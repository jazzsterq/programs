/**
* author : jazzsterq
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define be begin()
#define en end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
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
#define vp vector<pair<long long, long long> >
#define trav(v) for (auto it = v.begin(); it != v.end(); it++)
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)

const ll MAXN=1000000000000000000;
const ll MODN= 998244353;
void solve()
{
    ll n;
        cin>>n;
        vector<ll> arr(n);
        rep(i,n)cin>>arr[i];
        vector<vector<ll>> dp(n),dpp(n);
        for(int i=0;i<n;i++)
        {
            vector<ll> temp(2);
            dp[i]=temp;
            dpp[i]=temp;
        }
        rep(i,n)
        {
            dp[i][1]=-MAXN;
            dp[i][0]=MAXN;
        } 

        dp[0][0] = arr[0];
        dp[0][1] = abs(arr[0]);

      
        if(arr[0]>=0){dpp[0][1]=2;}
        else {  
        dpp[0][1]=1;
        dpp[0][0]=1;
        }
        forf(i,1,n)
        {
            dp[i][1] = max(abs(dp[i-1][0]+arr[i]),abs(dp[i-1][1]+arr[i]));
            dp[i][0] = min(dp[i-1][0]+arr[i],dp[i-1][1]+arr[i]);
            if(abs(dp[i-1][0]+arr[i])==dp[i][1])
            (dpp[i][1]+=dpp[i-1][0])%=MODN;
            if(dp[i-1][1]+arr[i]==dp[i][1])
            (dpp[i][1]+=dpp[i-1][1]%MODN)%=MODN;
            if(dp[i-1][0]+arr[i]==dp[i][1])
            (dpp[i][1]+=dpp[i-1][0])%=MODN;
            if(abs(dp[i-1][1]+arr[i])==dp[i][1])
            (dpp[i][1]+=dpp[i-1][1]%MODN)%=MODN;
            if(dp[i][1]!=dp[i][0])
            {
                if(dp[i-1][0]+arr[i]==dp[i][0])(dpp[i][0]+=dpp[i-1][0]%MODN)%=MODN;
                if(abs(dp[i-1][0]+arr[i])==dp[i][0])(dpp[i][0]+=dpp[i-1][0]%MODN)%=MODN;
                if(dp[i-1][1]+arr[i]==dp[i][0])(dpp[i][0]+=dpp[i-1][1]%MODN)%=MODN;
                if(abs(dp[i-1][1]+arr[i])==dp[i][0])(dpp[i][0]+=dpp[i-1][1]%MODN)%=MODN;
            }
            
            

        }
        cout<<dpp[n-1][1]%MODN;ce;
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
