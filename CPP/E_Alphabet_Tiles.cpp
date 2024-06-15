#include <iostream>
#include <vector>

#define MOD 998244353

using namespace std;

int main() {
    int K;
    cin >> K;
    vector<int> C(26);
    for (int i = 0; i < 26; i++) {
        cin >> C[i];
    }

    // dp[length][i][j] represents the number of valid strings of length 'length' with 'i' occurrences of the i-th character.
    vector<vector<vector<long long>>> dp(K + 1, vector<vector<long long>>(26, vector<long long>(1001, 0)));

    // Initial state: 1 way to make an empty string.
    for (int i = 0; i < 26; ++i) {
        dp[0][i][0] = 1;
    }

    // Update DP table
    for (int length = 0; length < K; ++length) {
        for (int i = 0; i < 26; ++i) {
            for (int count = 0; count <= C[i]; ++count) {
                if (dp[length][i][count] == 0) continue;
                // Add current character if it doesn't exceed its limit
                if (count + 1 <= C[i]) {
                    dp[length + 1][i][count + 1] = (dp[length + 1][i][count + 1] + dp[length][i][count]) % MOD;
                }
                // Move to the next character
                if (i + 1 < 26) {
                    dp[length][i + 1][0] = (dp[length][i + 1][0] + dp[length][i][count]) % MOD;
                }
            }
        }
    }

    // Sum up the valid counts for lengths from 1 to K
    long long result = 0;
    for (int length = 1; length <= K; ++length) {
        for (int i = 0; i < 26; ++i) {
            for (int count = 0; count <= C[i]; ++count) {
                result = (result + dp[length][i][count]) % MOD;
            }
        }
    }

    cout << result << endl;

    return 0;
}
