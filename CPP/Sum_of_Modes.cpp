#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	// your code goes here
    // int t;
    // cin>>t;
    // while(t--)
     {
        // int n;cin>>n;
        // string s;
        // cin>>s;
        for(int i=1;i<55;i++)
        {
            
        }
        map<ll,ll> freq;
        ll ans = (n*(n+1))/2;
        freq[0]++;
        ll sum =0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1'){sum+=1;}
            else sum-=1;
            ans+=freq[sum];
            freq[sum]++;
        }
        //cout<<ans<<endl;
        int ans2=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                int s1=0,s2=0;
                for(int k=i;k<=j;k++)
                {
                    if(s[k]=='0')s1++;
                    else s2++;
                }
                if(s1==s2)ans2+=2;
                else ans2+=1;
            }
        }
        if(ans2!=ans){
            cout<<s<<" "<<ans<<" "<<ans2;
        }
    }
}