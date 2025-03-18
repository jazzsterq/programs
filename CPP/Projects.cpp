
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long projects;
	cin>>projects;
	vector<pair<pair<long long,long long>,long long>> data(projects); // ((start,end),reward)
    for(long long i=0;i<projects;i++)
    {
        cin>>data[i].first.first>>data[i].first.second>>data[i].second;
    }
    sort(data.begin(),data.end(),[](pair<pair<long long,long long>,long long> a,pair<pair<long long,long long>,long long> b){
    return a.first.second<b.first.second;
    });
    long long rewards[projects+1];
    vector<long long> endtimes(projects);
    for(long long i=0;i<projects;i++)
    {	
        endtimes[i]=data[i].first.second;
        
    }
    memset(rewards,0,sizeof(rewards));
    for(long long i=0;i<projects;i++)
    {
        long long pos=lower_bound(endtimes.begin(),endtimes.end(),data[i].first.first)-endtimes.begin();
        rewards[i+1]=max(rewards[i],rewards[pos]+data[i].second);
    }
    cout<<rewards[projects];
}
