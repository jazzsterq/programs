#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    multiset<int> price;
    for(int i=0;i<n;i++){
        int temp;cin>>temp;
        price.insert(temp);
    }
    for(int i=0;i<m;i++)
    {
        int topay;cin>>topay;
        auto it=price.upper_bound(topay);
        if(it==price.begin()){cout<<-1<<endl;continue;}
        it--;
        cout<<*it<<endl;
        price.erase(it);
    }
}

