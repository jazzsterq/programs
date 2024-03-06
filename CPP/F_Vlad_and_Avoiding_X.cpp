#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fi first
#define se second
#define INF 1000000000000000000
#define pb push_back
#define mp make_pair
#define srt(vect) sort(vect.begin(), vect.end())
#define ce cout<<endl
#define all(s) s.begin(), s.end()
#define pyes printf("YES");
#define pno printf("NO");
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)
#define vp vector<pair<ll, ll> >
#define v vector<ll>
const ll MODN = 1e9 + 7;
const ll MAXN = 1000001;
int main() {
    // Optimize input/output (remove if using cin cout exclusively)
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t=1;
   cin>>t;
    while (t--)
    {   //Lesgooooooo!!!!
    ll n =7;
        vector<string> grid(n,"");
        vector<vector<int> > pos(7,vector<int>(n,0));
        ll cnt = 0;
        rep(i,n){cin>>grid[i];}
        while(1){
               rep(r,n){
                            rep(j,n){
                                pos[r][j]=0;
                                
                            }
                        } 
            ll mx=INT_MIN;ll row,col;
            forf(i,1,n-1){
                forf(j,1,n-1){
                    ll cq=1;
                    if(grid[i][j]=='B'){
                        for(int r = -1;r<=1;r+=2){
                            for(int c=-1;c<=1;c+=2){
                                if(grid[i+r][j+c]!='B'){cq=0;break;}
                            }
                        }
                        if(cq){
                            pos[i][j]+=1;
                            if(pos[i][j]>mx){mx = pos[i][j];row =i;col = j;}
                        for(int r = -1;r<=1;r+=2){
                            for(int c=-1;c<=1;c+=2){
                                pos[i+r][j+c]+=1;
                                if(pos[i+r][j+c]>mx){mx = pos[i+r][j+c];row =i+r;col = j+c;}
                            }
                        } 
                        }
                    }
                    
                }

            }
            if(pos[row][col]){grid[row][col]='W';cnt++;}
           

            ll brk=1;
        rep(i,n){rep(j,n){if(pos[i][j]){brk=0;break;}}}
        if(brk)break;
        }
        cout<<cnt;ce;
        // rep(i,n){rep(j,n){cout<<pos[i][j];}ce;}ce;
    }

    return 0;
}