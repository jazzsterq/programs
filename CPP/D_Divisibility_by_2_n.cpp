#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define be begin()
#define en end()
#define pb push_back
#define pyes cout << "YES\n"
#define pno cout << "NO\n"
#define ce cout << '\n'
#define endl '\n'
#define rev(v) reverse(v.begin(), v.end())
#define srt(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()
#define mnv(v) *min_element(v.begin(), v.end())
#define mxv(v) *max_element(v.begin(), v.end())
#define fi first
#define se second
#define deb(x) cout << #x << "=" << x << endl
#define vll vector<ll>
#define vp vector<pair<long long, long long> >
#define trav(v) for (auto it = v.begin(); it != v.end(); it++)
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int count=0;
        long long int count2=0;
        vector<long long int>out;
        for(int i=1;i<=n;i++)
        {
            count2=0;
            int x;
            cin>>x;
            while((x%2==0) && (x>0))
            {
                x/=2;
                count++;
            }
            int k=i;
            while((k%2==0) && (k>0))
            {
                k/=2;
                count2++;
            }
            out.push_back(count2);
        }
        if(count>=n)
        {
            cout<<0<<endl;
        }
        else
        {
            sort(out.begin(),out.end());
            long long int diff=n-count;
            long long int sum=0;
            int i=out.size()-1;
            long long int output=0;
            while(sum<diff && i>=0)
            {
                sum+=out[i];
                i--;
                output++;
            }
            if(sum>=diff)
            {
                cout<<output<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }




    }




    return 0;
}