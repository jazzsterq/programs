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
    string s;ll sum=0;
    while(cin>>s)
    {
        ll dig1,dig2;
        unordered_map<string,int> ump;
         ump["one"]=1;ump["two"]=2;ump["three"]=3;ump["four"]=4;ump["five"]=5;ump["six"]=6;ump["seven"]=7;ump["eight"]=8;ump["nine"]=9;
     
        unordered_map<string,int> umpr;
        umpr["eno"]=1;umpr["owt"]=2;umpr["eerht"]=3;umpr["ruof"]=4;umpr["evif"]=5;umpr["xis"]=6;umpr["neves"]=7;umpr["thgie"]=8;umpr["enin"]=9;
        ll locdig2=-1,locdig1=s.length()+1;
       rep(i,s.length())
       {
            int a=(int)s[i];
            if(a>=48&&a<=57)
            {
                dig1=a-48;
                locdig1=i;break;
            }
       }
       rep(i,s.length())
       {
            int a=(int)s[s.length()-i-1];
            if(a>=48&&a<=57)
            {
                locdig2=s.length()-i-1;
                dig2=a-48;break;
            }
       }
        ll minI=INT_MAX,minV=0;
       for(auto x:ump) 
       {
        if(s.find(x.first)!=string :: npos)
        {
            if(s.find(x.first)<minI)
            {
                minI=s.find(x.first);
                minV=x.se;
            }
        }
       }
       string sc=s;
       reverse(s.begin(),s.end());
        ll minI2=INT_MAX,minV2=0;
       for(auto x:umpr) 
       {
        if(s.find(x.first)!=string :: npos)
        {
            if(s.find(x.first)<minI2)
            {
                minI2=s.find(x.first);
                minV2=x.se;
            }
        }
       }
         ll x=(s.length()-minI2-1);

      //cout<<dig1<<" "<<dig2<<" "<<minV<<" "<<minV2;ce;
     // cout<<locdig1<<" "<<locdig2<<" "<<minI<<" "<<x;ce;
        if(minI<locdig1)
        {
            dig1=minV;
        }
      
        if(x>locdig2)
        {
            dig2=minV2;
        }
       sum+=(dig1*10+dig2);
    }cout<<sum;
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

        solve();


return 0 ;
}