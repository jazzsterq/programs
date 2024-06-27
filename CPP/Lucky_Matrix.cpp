#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
vector<long long> factorial, invFactorial;

long long modExp(long long base, long long exp, long long modulus) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % modulus;
        base = (base * base) % modulus;
        exp >>= 1;
    }
    return result;
}

void precomputeFactorials(int maxN) {
    factorial.resize(maxN + 1, 1);
    invFactorial.resize(maxN + 1, 1);
    for (int i = 2; i <= maxN; i++) {
        factorial[i] = factorial[i - 1] * i % MOD;
    }
    invFactorial[maxN] = modExp(factorial[maxN], MOD - 2, MOD);
    for (int i = maxN - 1; i > 0; i--) {
        invFactorial[i] = invFactorial[i + 1] * (i + 1) % MOD;
    }
}

long long binomial(int n, int k) {
    if (k > n || k < 0) return 0;
    return factorial[n] * invFactorial[k] % MOD * invFactorial[n - k] % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int maxN = 100000;
    precomputeFactorials(maxN);

    int T; cin >> T;
    while (T--) {
        int N, M, K, X, Y; cin >> N >> M >> K >> X >> Y;
        long long p = X * 1LL * modExp(Y, MOD - 2, MOD) % MOD;
        long long q = (1 - p + MOD) % MOD;

        long long totalSum = 0;
        for (int s = 1; s <= K; s++) {
            long long countWays = binomial(N, s);
            long long probAllRowsEven = modExp(q, M, MOD);
            long long expected = countWays * probAllRowsEven % MOD;
            totalSum = (totalSum + expected) % MOD;
        }

        long long P = totalSum;
        long long Q = modExp(modExp(q, M, MOD), K, MOD);  // Q should be the product of the probabilities for K elements
        long long Q_inv = modExp(Q, MOD - 2, MOD);  // Modular inverse of Q

        long long result = P * Q_inv % MOD;
        cout << result << '\n';
    }

    return 0;
}
