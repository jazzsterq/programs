
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fi first
#define se second
#define INF 1000000000000000000
#define pb push_back
#define mp make_pair
#define srt(vect) sort(vect.begin(), vect.end())
#define ce cout<<endl
#define all(s) s.begin(), s.end()
#define pyes cout<<"YES";
#define pno cout<<"NO";
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)
#define vp vector<pair<ll, ll> >
#define v vector<ll>

const ll MODN = 1e9 + 7;
const ll MAXN = 1000001;
const ll modn = 998244353;
void solve()
{
    rep(i,10)
    {
    }
    ll a,b;
        unsigned long long c;
        cin>>a>>b>>c;
        bitset<60> x = c;
        ll pc_c=0;
        rep(i,60)if(x[i]== 1)pc_c++;
        ll left = 60-pc_c;
        ll a_count=-INF,b_count=-INF;

        rep(i,pc_c+1)
        {
            ll l = a-i;
            ll r = b - (pc_c-i);
            if(l>=0 && r>=0  && r==l)
            {
                if(l+r<=(left)*2)
                {
                    a_count = i;
                    b_count = pc_c-i;
                    break;
                }
            }
        }
        ll cq=1;
        if(a_count==-INF || b_count==-INF )cq=0;
        // cout<<a_count<<" "<<b_count;
        if(cq)
        { 
        bitset<60> A =c ;
        bitset<60> B  ;
        ll cnt  =0;
        ll cq2=1;
        if(!(a_count))cq2=0;
        rep(i,60)
        {
            if(cnt>=a_count)cq2=0;
            if(!cq2)A[i]=0;
            if(A[i]==1)cnt++;
            
        }
        B  = A^x;
        ll rem = a-a_count;
        rep(i,60)
        {
            if(!A[i] && !B[i])
            {
                if(rem){A[i]=1;B[i]=1;rem--;}
            }
        }
        if(rem)cq=0;

        if(cq){
        unsigned long long a1  = A.to_ulong();
        unsigned long long b1  = B.to_ulong();
        cout<<a1<<" "<<b1;ce;
        }
        else cout<<-1;
        
        }
        else cout<<-1;
        
        ce;

    
    return;
}
int main() {
    // Optimize input/output (remove if using cin cout exclusively)
    // gcd_snip //spf_snip // erat_snip
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}