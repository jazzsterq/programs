#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MOD = 998244353;

ll mod_exp(ll base, ll exp, ll mod) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;

    ll ans = 0;
    rep(i,61){
        if (m & (1ll << i)) {
            ll tc = (n + 1) / (1ll << (i + 1));
            ll rem = (n + 1) % (1ll << (i + 1));
            ll con = tc * (1ll << i);
            con += max(0ll, rem - (1ll << i));
            con %= MOD;
            ans = (ans + con) % MOD;
        }
    }

    cout << ans << endl;
    return 0;
}
