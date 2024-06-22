#include <iostream>
#include <vector>
#include <map>
#include <tuple>
using namespace std;

const int MOD = 1e9 + 7;

map<tuple<int, int, bool, bool>, int> dp;

int digit_dp(int pos, int mask, bool tightL, bool tightR, const vector<int>& L, const vector<int>& R, int K, int B) {
    if (pos == L.size()) {
        return __builtin_popcount(mask) == K ? 1 : 0;
    }

    auto key = make_tuple(pos, mask, tightL, tightR);
    if (dp.find(key) != dp.end()) {
        return dp[key];
    }

    int limitL = tightL ? L[pos] : 0;
    int limitR = tightR ? R[pos] : B - 1;

    int ans = 0;
    for (int digit = limitL; digit <= limitR; ++digit) {
        bool new_tightL = tightL && (digit == L[pos]);
        bool new_tightR = tightR && (digit == R[pos]);
        int new_mask = mask | (1 << digit);
        ans = (ans + digit_dp(pos + 1, new_mask, new_tightL, new_tightR, L, R, K, B)) % MOD;
    }

    dp[key] = ans;
    return ans;
}

int count_numbers(int N, int B, int K, const vector<int>& L, const vector<int>& R) {
    dp.clear();
    return digit_dp(0, 0, true, true, L, R, K, B);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int N, B, K;
        cin >> N >> B >> K;

        vector<int> L(N), R(N);
        for (int i = 0; i < N; ++i) {
            cin >> L[i];
        }
        for (int i = 0; i < N; ++i) {
            cin >> R[i];
        }

        cout << count_numbers(N, B, K, L, R) << endl;
    }

    return 0;
}
