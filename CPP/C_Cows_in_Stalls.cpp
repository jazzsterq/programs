#include <bits/stdc++.h>
using namespace std;
int check(double mid,int k,vector<int> &stations)
    {
        int pos=1;
        double curr=stations[0];
        while(pos<stations.size())
        {
            double a1=curr+mid;
            if(stations[pos]<=a1)
            {
                curr=stations[pos];
                pos++;
                
            }
            else{
                if(k<=0)break;
                k--;
                curr=curr+mid;
            }
        }
        if(pos>=stations.size())return 1;
        else return 0;
    }
    int main() {
        int n;
        cin>>n;
        vector<int> stations(n);int k;
        for(int i=0;i<n;i++)cin>>stations[i];
        cin>>k;
        double start=0,end=stations[n-1]-stations[0]+1;
        int count=1000;
        while(count)
        {
            double mid=start+(end-start)/2.0000;
            if(check(mid,k,stations))
            {
                end=mid;
            }
            else
            start=mid;
            count--;
        }
        
    }