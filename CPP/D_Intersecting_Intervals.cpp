#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fi first
#define se second
#define mp make_pair

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    ll active = 0, ans = 0;
    cin >> n;
    vector<pair<ll, int> > rem;  // Store rem
    rem.reserve(2 * n);
    for(int i=0;i<5;i++)
    {}
    for (ll i = 0; i < n; ++i) {
        ll l, r;
        cin >> l >> r;
        rem.emplace_back(l, 1);   
        rem.emplace_back(r + 1, -1); 
    }


    sort(rem.begin(), rem.end());

    
    for (auto& event : rem) {
        if (event.se == 1) { // Start of an interval
            ans += active;  // Count all active intervals that this one intersects with
            active++;
        } else { // End of an interval
            active--;
        }
    }

    cout << ans << "\n";
    return 0;
}