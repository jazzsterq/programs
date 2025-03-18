#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<pair<int,int>,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first.first>>v[i].first.second;
        v[i].second=i;
    }
    sort(v.begin(),v.end());
    priority_queue<pair<int,int>> rooms;
    int curr=1;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        if(rooms.empty()||(-rooms.top().first)>=v[i].first.first)
        {
            //cout<<curr<<" ";
            rooms.push({-v[i].first.second,curr});
            ans[v[i].second]=(curr);
            curr++;
    }
        else
        {
            int val=rooms.top().second;
            rooms.pop();
            //cout<<val<<" ";
            rooms.push({-v[i].first.second,val});
            ans[v[i].second]=(val);
        }
    }//cout<<endl;
     //for(int i=0;i<n;i++){
      //  cout<<v[i].first.first<<" ";}cout<<endl;
     //for(int i=0;i<n;i++){
      //  cout<<v[i].first.second<<" ";}cout<<endl;

    cout<<curr-1<<endl;
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";
}