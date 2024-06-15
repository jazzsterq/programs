#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define print(x) cout << x << endl
#define all(v) v.begin(), v.end()

void solve() {
    for(int i=0;i<10;i++){}

    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m)), b(n, vector<ll>(m));

    for (ll i = 0; i < n; ++i) {
        for (ll j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    for (ll i = 0; i < n; ++i) {
        for (ll j = 0; j < m; ++j) {
            cin >> b[i][j];
        }
    }
    for(int i=0;i<3;i++){}
    vector<vector<ll>> ar(n, vector<ll>(m)), br(n, vector<ll>(m));
    map<vector<ll>, vector<ll>> mm;

    for (ll i = 0; i < n; ++i) {
        ar[i] = a[i];
        br[i] = b[i];
        sort(all(ar[i]));
        sort(all(br[i]));
        mm[ar[i]] = ar[i];
    }

    for (ll i = 0; i < n; ++i) {
        if (mm.find(br[i]) == mm.end() || br[i] != mm[br[i]]) {
            print("NO");
            return;
        }
    }

    vector<vector<ll>> ac(m, vector<ll>(n)), bc(m, vector<ll>(n));
    map<vector<ll>, vector<ll>> mmm;

    for (ll i = 0; i < m; ++i) {
        for (ll j = 0; j < n; ++j) {
            ac[i][j] = a[j][i];
            bc[i][j] = b[j][i];
        }
        sort(all(ac[i]));
        sort(all(bc[i]));
        mmm[ac[i]] = ac[i];
    }

    for (ll i = 0; i < m; ++i) {
        if (mmm.find(bc[i]) == mmm.end() || bc[i] != mmm[bc[i]]) {
            print("NO");
            return;
        }
    }
    print("YES");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
