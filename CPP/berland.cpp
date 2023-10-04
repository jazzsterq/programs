#include <iostream>
#include <utility>
#include <string>
using namespace std;
typedef long long ll;
#define ce cout << '\n'
#define rep(i, n) for (ll i = 0; i < n; i++)
struct triple
{
    bool first;
    int second;
    int third;
};
bool iterate(triple t1,triple t2)
{
    if(t1.first < t2.first)
    {
        return true;
    }
    else if (t1.first == t2.first)
    {
        if(t1.second<t2.second)
        return true;
        else return false;
    }
    else 
        return false;
}
void solve()
{
    int n;
    cin>>n;
    vector < triple > v(n);
    rep(i,n)
    {
        cin>>v[i].second;
        v[i].third=i;
    }
    string aa;
    cin >>aa;
    rep(i,n)
    v[i].first=aa[i]-'0';
    sort(v.begin(),v.end(),iterate);
    int a[n];
    rep(i,n)
    {
        a[v[i].third]=i+1;
    }
    rep(i,n)
    {
        cout<<a[i]<<" ";
    }
    ce;
    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
int t;
    cin >> t;
    while(t--){
        solve();
    }

return 0 ;
}