#include <bits/stdc++.h>
using namespace std;
int main(){
    int B;
    cin>>B;
    int n;
    cin>>n;
    vector <int> A(n);
    for(int i=0;i<n;i++)cin>>A[i];
    vector <int> pre,suff;
    int sum=0;
    for(int i=0;i<A.size();i++){
        sum+=A[i];
        pre.push_back(sum);
    }
    sum=0;
    for(int i=A.size()-1;i>=0;i--)
    {
        sum+=A[i];
        suff.push_back(sum);
    }
    int ans=INT_MIN;
    ans=max(pre.back(),suff.back());
    for(int i=B-1;i>0;i--)
    {
        int tempsum=pre[i-1]+suff[B-i-1];
        ans=max(ans,tempsum);
        cout<<i-1<<" "<<B-i-1<<" "<<tempsum<<endl;
    }
    cout<<ans;
}
