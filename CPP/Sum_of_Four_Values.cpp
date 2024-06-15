#include <bits/stdc++.h>
using namespace std;
 
 
bool comp(pair<int,int> a,pair<int,int> b){
    return a.second<b.second;
}
 
int main()
{
    std:ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    int x;
    cin>>n>>x;
   vector<pair<int,int> > v;
   for(int i=0;i<n;i++)
   {
    int element;
    cin>>element;
    v.push_back({i,element});
   }
   sort(v.begin(),v.end(),comp);
int l=0;
int h=0;
   for(int i=0;i<n-3;i++)
   {
    //  if(i>0&&(v[i].second==v[i-1].second)){
    //     continue;
    //     }
    for(int j=0;j<n-2;j++)
    {
        // if(j!=i+1&&(v[j].second==v[j-1].second))
        // {
        // continue;
        // }
        if(i==j)continue;
        l =1;
        h =n-1; 
        int sum= x-v[i].second-v[j].second;
    while(l<h){
 
        if(l==i||l==j){l++;continue;}
        if(h==i||h==j){h--;continue;}
    if(sum==(v[l].second+v[h].second)){
        //cout<<i<<j<<l<<h;
        cout<<v[i].first+1<<" "<<v[j].first+1<<" "<<v[l].first+1<<" "<<v[h].first+1;
        return 0;
    }else if(sum<(v[l].second+v[h].second)){
        h--;
    }else{
        l++;
    }
 
   }
 
   }
 
   
    }
cout<<"IMPOSSIBLE";
}
