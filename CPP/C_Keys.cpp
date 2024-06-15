#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<vector<int>> tests(M);
    vector<char> results(M);
    for (int i = 0; i < M; ++i) {
        int C;
        cin >> C;
        tests[i].resize(C);
        for (int j = 0; j < C; ++j) {
            cin >> tests[i][j];
            tests[i][j]--;  // Convert to 0-based index
        }
        cin >> results[i];
    }

    int valid_combinations = 0;
    int total_combinations = 1 << N;  // 2^N

    for (int mask = 0; mask < total_combinations; ++mask) {
        bool is_valid = true;
        for (int i = 0; i < M; ++i) {
            int real_key_count = 0;
            for (int key : tests[i]) {
                if (mask & (1 << key)) {
                    real_key_count++;
                }
            }
            if ((results[i] == 'o' && real_key_count < K) || (results[i] == 'x' && real_key_count >= K)) {
                is_valid = false;
                break;
            }
        }
        if (is_valid) {
            valid_combinations++;
        }
    }

    cout << valid_combinations << endl;

    return 0;
}
