#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define rep(i,a,b) for(int i = a;i<b;i++)
#define inf 9223372036854775807
#define iinf 2147483647
#define PB push_back
typedef vector<ll> vi;
typedef vector<pair<ll,ll>> vp;
typedef vector<char> vc;
#define F first
#define S second
#define all(C) C.begin(), C.end()
#define show(C) for(auto J: C) cout<<J<<" "; cout << endl;
//greater <>() opp sort function
int p = 1e9+7;
int pow(int x, int y)
{
 
    // Initialize answer
    int res = 1;
 
    // Check till the number becomes zero
    while (y > 0) {
 
        // If y is odd, multiply x with result
        if (y % 2 == 1)
            res = (res * x);
 
        // y = y/2
        y = y >> 1;
 
        // Change x to x^2
        x = (x * x);
    }
    return res % p;
}
int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n;
cin>>n;
//H happy , S,D sad AEIOU - flip

int x = (pow(23,n)+pow(13,n))/2;
x+=pow(26,n-1);
x+= (23*(pow(26,n-1)-pow(23,n-1))  - pow(26,n-1)+pow(13,n-1))/2;
cout<<x<<endl;

return 0;
}