#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Define maximum possible digits in numbers
const int MAX_DIGITS = 20;

// Define bounds for sum calculation (conservative estimate)
const int MAX_SUM = 162;  // Max sum for 18 digits all being 9

// Prime digits are 2, 3, 5, 7
bool is_prime(int x) {
    return x == 2 || x == 3 || x == 5 || x == 7;
}

// Memoization table for Digit DP
ll dp[MAX_DIGITS][2][10][10][MAX_SUM][MAX_SUM];

// Function to fill the string with leading zeros for uniform processing
string lpad(const string& str, int len, char ch) {
    string res = str;
    while (res.size() < len) res = ch + res;
    return res;
}

// Digit DP function
ll digit_dp(const string& num, int pos, int tight, int minD, int maxD, int sumPrime, int sumNonPrime, int mn, int mx, int S) {
    if (pos == num.size()) {
        if (minD == mn && maxD == mx && abs(sumPrime - sumNonPrime) <= S)
            return 1;
        return 0;
    }

    ll &res = dp[pos][tight][minD][maxD][sumPrime][sumNonPrime];
    if (res != -1) return res;

    int limit = tight ? (num[pos] - '0') : 9;
    res = 0;

    for (int d = 0; d <= limit; d++) {
        int newMin = (pos == 0 && d == 0 && minD == 10) ? 10 : min(minD, d);
        int newMax = max(maxD, d);
        int newSumPrime = sumPrime + (is_prime(d) ? d : 0);
        int newSumNonPrime = sumNonPrime + (is_prime(d) ? 0 : d);
        res += digit_dp(num, pos + 1, tight && (d == limit), newMin, newMax, newSumPrime, newSumNonPrime, mn, mx, S);
    }

    return res;
}

// Function to count valid numbers up to a given number
ll count_valid_numbers(ll N, int S, int mn, int mx) {
    string num = to_string(N);
    num = lpad(num, MAX_DIGITS, '0');  // Pad with zeros to have uniform length
    memset(dp, -1, sizeof(dp));  // Clear memo table
    return digit_dp(num, 0, 1, 10, 0, 0, 0, mn, mx, S);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll L, R;
    int k, S, mn, mx;
    cin >> L >> R >> k >> S >> mn >> mx;

    ll total = count_valid_numbers(R, S, mn, mx) - count_valid_numbers(L - 1, S, mn, mx);

    if (k > total) {
        cout << "-1\n";
        return 0;
    }

    ll low = L, high = R, mid, ans = -1;
    while (low <= high) {
        mid = (low + high) / 2;
        ll cnt = count_valid_numbers(mid, S, mn, mx) - count_valid_numbers(L - 1, S, mn, mx);
        if (cnt >= k) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}
