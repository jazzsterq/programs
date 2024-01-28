#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define mod 1000000007
#define MAXXX 1e6

void solve()
{
    long long n; cin>>n;
    vector<long long> a(n);
    long long inp=0;
    while(inp<n) 
    {
        cin>>a[inp];
        inp++;
    }
    vector<long long> revet[21];
    for(long long lp=0;lp<n;lp++)
    {
        for(long long lpp=0;lpp<=20;lpp++)
        {
            if(a[lp]&(1<<lpp)) revet[lpp].push_back(lp+1);
        }
    }
    long long q; cin>>q;
    while(q--){
        long long as11 = MAXXX, as111 = -1, as112 = MAXXX;
        long long idx, val; cin>>idx>>val;
        for(long long lp = 20; lp>=0; lp--){
            if (revet[lp].size() == 0) continue;
            auto it = lower_bound((revet[lp]).begin(), (revet[lp]).end(), idx);
            if ( val < (1<<lp) && as111 == -1 ){
                auto it = lower_bound((revet[lp]).begin(), (revet[lp]).end(), idx);
                if ( it != (revet[lp]).end() ){
                    as11 = min(as11, *it);
                }
            }
            else if (val < (1<<lp)){
                auto it = lower_bound((revet[lp]).begin(), (revet[lp]).end(), idx);
                if ( it != (revet[lp]).end() ){
                    if (as112 == MAXXX){
                    as112 = min(as112, *it);
                    as112 = max(as111,as112);
                    }
                    else{
                        long long finans = min(as112, *it);
                        finans = max(as111,finans);
                        as112 = min(as112, finans);
                    }
                }

            }
            else{
                auto it = lower_bound((revet[lp]).begin(), (revet[lp]).end(), idx);
                if ( it != (revet[lp]).end() ){
                    as111 = max(as111, *it);
                    // cout<<*it<<endl;
                    val -= (1<<lp);
                }
            }
        }
        if ( val > 0){as111 = -1;}
        if ( as111 > 0){
            cout<<min(min(as11,as111),as112)<<" ";
        }
        else if (min(as11,as112) == MAXXX){
            cout<<-1<<" ";
        }
        else{
            cout<<min(as11,as112)<<" ";
        }
    }

}


int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}