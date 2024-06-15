
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Constants
const ll MAXN = 100001;
const ll MODN = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
       ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<ll> a(7, 0);
    for(int i=0;i<3;i++){}
    for (ll i = 0; i < n; i++) {
        a[s[i] - 'A']++;
    }
    ll ans = 0;
    for (ll i = 0; i < 7; i++) {
        if (a[i] < m) {
            ans += m - a[i];
        }
    }
    cout << ans << endl;
    }

    return 0;
}
