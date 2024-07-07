/* Read input from STDIN. Print your output to STDOUT*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *a[])
{
    int t;
    cin>>t;
    while(t--)
    {
        int left;
        cin>>left;
        vector<int> l(left);
        for(int i=0;i<left;i++)
        {
            cin>>l[i];
            
        }
        int right;
        cin>>right;
        vector<int> r(right);
        for(int i=0;i<right;i++)
        {
            cin>>r[i];
        }
        int cost=0;cin>>cost;
        for(int i=1;i<left;i++)
        {
            l[i]+=l[i-1];
        }
        for(int i=1;i<right;i++)
        {
            r[i]+=r[i-1];
        }
        priority_queue<int> rr;
        for(int i=0;i<right;i++)
        {
            rr.push(r[i]);
        }
        int ans=right;
        while(!rr.empty()&&cost<(rr.top())){
            rr.pop();
        }
        ans=rr.size();
        //cout<<ans<< " ";
        int maxrides=ans;
        for(int i=0;i<left;i++)
        {
            int rides;
            if(l[i]>cost)break;
            rides=i+1;
            while(!rr.empty()&&(cost-l[i])<(rr.top())){
            rr.pop();
            }
            maxrides=max(maxrides,(int)(rides+rr.size()));
        }
        cout<<maxrides<<endl;
    }
}
