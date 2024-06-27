#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <unordered_map>
#define MOD 998244353

using namespace std;

bool is_palindrome(const string& s) {
    int n = s.length();
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - 1 - i]) return false;
    }
    return true;
}

vector<string> generate_palindromic_patterns(int k) {
    vector<string> patterns;
    int total = 1 << k; // 2^k possible patterns
    for (int i = 0; i < total; ++i) {
        string s = "";
        for (int j = 0; j < k; ++j) {
            s += (i & (1 << j)) ? 'B' : 'A';
        }
        if (is_palindrome(s)) patterns.push_back(s);
    }
    return patterns;
}

int solve(int N, int K, const string& S) {
    vector<string> palindromes = generate_palindromic_patterns(K);
    vector<unordered_map<string, int>> dp(N + 1);
    dp[0][""] = 1;

    for (int i = 0; i < N; ++i) {
        for (const auto& p : dp[i]) {
            string current = p.first;
            vector<char> options = (S[i] == '?') ? vector<char>{'A', 'B'} : vector<char>{S[i]};
            for (char ch : options) {
                string next = current + ch;
                if (next.size() > K) next.erase(0, 1);  // Keep only the last K characters
                // Check for palindrome if next is of length K
                if (next.size() == K && is_palindrome(next)) continue;
                dp[i + 1][next] = (dp[i + 1][next] + p.second) % MOD;
            }
        }
    }

    int result = 0;
    for (const auto& p : dp[N]) {
        result = (result + p.second) % MOD;
    }
    return result;
}

int main() {
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;
    cout << solve(N, K, S) << endl;
    return 0;
}
