#include <bits/stdc++.h>
using namespace std;
int ans=0;
int isBeautiful(vector <int> v,int k)
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size();j++)
        {
            if(i==j)continue;
            if(v[i]-v[j]==k)return 0;
        }
    }
    return 1;
}
int main() {
    //sort(nums.begin(),nums.end());
    int n;
    cin>>n;
    vector <int> nums(n);
    for(int i=0;i<n;i++)
    cin>>nums[i];
    int k;
    cin>>k;
    string s;
    s.to_ulo
    function <void(vector<int> , int)> check =[&](vector <int> v,int pos) 
    {
        for(int i=pos;i<nums.size();i++)
        {
            v.push_back(nums[i]);
            if(isBeautiful(v,k))ans++;
            for(int j=0;j<v.size();j++)cout<<v[j]<<" ";cout<<endl;
            check(v,i+1);
            v.pop_back();
        }
    };
    vector <int> empty;
    check(empty,0);
    cout<<ans;
    return 0;
}
    