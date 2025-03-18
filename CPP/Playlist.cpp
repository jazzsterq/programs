#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    queue<int> q;
    map<int,int> m;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(!m[a[i]])
        {
            m[a[i]]=1;
            q.push(a[i]);
            ans=max(ans,(int)q.size());
        }
        else
        {
            while(q.front()!=a[i]){
            m[q.front()]=0;q.pop();
            }
            q.pop();
            q.push(a[i]);
        }
    }
    ans=max(ans,(int)q.size());
    cout<<ans;
}