#include<bits/stdc++.h>
using namespace std;
#define int long long
#define sz(x) static_cast<int>((x).size())
#define all(x) begin(x), end(x)
const int mod = 1e9 + 7;

void solve(){

    int n;
    cin >> n;
    int q;cin>>q;
    vector<int> a(n);
    for (auto &x : a)cin >> x;

    multiset<int> hi, lo;
    int sum_hi = 0, sum_lo = 0;
    vector<int> ans(n);
    for (int i = 0; i < n; ++i){
        if (i & 1){
            if (a[i] > *hi.begin()){
                sum_hi += a[i] - *hi.begin();
                sum_lo += *hi.begin();
                lo.insert(*hi.begin());
                hi.insert(a[i]);
                hi.erase(hi.begin());
            } else{
                lo.insert(a[i]);
                sum_lo += a[i];
            }
        } 
        else {
            if (lo.empty()){
                hi.insert(a[i]);
                sum_hi += a[i];
            } else if (a[i] < *lo.rbegin()){
                sum_hi += *lo.rbegin();
                sum_lo += a[i] - *lo.rbegin();
                hi.insert(*lo.rbegin());
                lo.insert(a[i]);
                lo.erase(lo.find(*lo.rbegin()));
            } else{
                hi.insert(a[i]);
                sum_hi += a[i];
            }
            ans[i]=sum_hi - sum_lo;
        }
    }
    while(q--)
    {
        int temp;
        cin>>temp;
        cout<<ans[temp-1]<<" ";
    }cout<<endl;
}


signed main(){
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 0;
    cin >> t;
    while (t--) solve();
}