#include <iostream>
#include <vector>

using namespace std;

int max_segments(int t, vector<pair<int, vector<int>>> &test_cases) {
    vector<int> results;
    for (auto &test : test_cases) {
        int n = test.first;
        int x = test.second[0];
        vector<int> &a = test.second;

        vector<pair<int, int>> segments;
        int segment_start = 0;
        int current_xor = 0;
        for (int i = 0; i < n; ++i) {
            current_xor ^= a[i];
            if (current_xor > x) {
                while (current_xor > x && segment_start < i) {
                    current_xor ^= a[segment_start];
                    segment_start++;
                }
            }
            if (current_xor <= x) {
                segments.push_back({segment_start, i});
            }
        }

        if (segments.size() == 0 || (segments.back().second != n - 1 && current_xor <= x)) {
            results.push_back(-1);
        } else {
            results.push_back(segments.size());
        }
    }

    // Printing results
    for (int res : results) {
        cout << res << endl;
    }
}

int main() {
    int t;
    cin >> t;
    vector<pair<int, vector<int>>> test_cases;
    for (int i = 0; i < t; ++i) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int j = 0; j < n; ++j) {
            cin >> a[j];
        }
        test_cases.push_back({n, a});
    }
    max_segments(t, test_cases);
    return 0;
}
