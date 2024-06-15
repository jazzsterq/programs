#include <bits/stdc++.h>
using namespace std;
void solve() {
    int h, n;
    cin >> h >> n;
    
    vector<int> a(n), c(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    
    long long lo = 0, hi = 1E11;
    while (lo+1 < hi) {
        long long x = (lo + hi) / 2;
        long long dmg = 0;
        for (int i = 0; i < n; i++) {
            dmg += (x + c[i] - 1) / c[i] * a[i];
            if (dmg >= h) {
                break;
            }
        }
        if (dmg >= h) {
            hi = x;
        } else {
            lo = x;
        }
    }
    cout << hi << "\n";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}