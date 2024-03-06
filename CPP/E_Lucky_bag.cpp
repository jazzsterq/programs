//------ADIL SAYYED--------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)
#define vt vector<ll>
#define vp vector<pair<long long, long long>>
#define srt(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
 
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        string new_s = "";
        ll cap = 0;
        ll sml = 0;
        reverse(s.begin() , s.end());
        forf(i,0,s.length()){
            if(s[i]=='b')
            {
                sml++;
            }
            else if(s[i]=='B')
            {
                cap++;
            }
            else if(s[i]>='A'&&s[i]<='Z')
            {
                if(cap>0){
                    cap--;
                }else
                    new_s=new_s+s[i];
            }
            else 
            {
                if(sml>0){
                    sml--;
                }else {
                    new_s=new_s+s[i];
                }    
            }
        }       
        reverse(new_s.begin() , new_s.end());
        cout<<new_s<<'\n';
    }
}