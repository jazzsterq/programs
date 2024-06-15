#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n + m + 1), b(n + m + 1);
    for (int i = 0; i < n + m + 1; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n + m + 1; i++) {
        cin >> b[i];
    }

    // Data to hold candidate indices sorted by programming and testing skill
    vector<int> indices(n + m + 1);
    iota(indices.begin(), indices.end(), 0); // Fill with 0, 1, 2, ..., n+m

    // Sort indices based on programming skill and testing skill
    sort(indices.begin(), indices.end(), [&](int i, int j) {
        return a[i] > a[j];
    });
    vector<int> prog_indices = indices; // Top n candidates for programmers

    sort(indices.begin(), indices.end(), [&](int i, int j) {
        return b[i] > b[j];
    });
    vector<int> test_indices = indices; // Top m candidates for testers

    // Calculate the maximum possible skill sum
    ll total_prog_skill = 0, total_test_skill = 0;
    for (int i = 0; i < n; i++) {
        total_prog_skill += a[prog_indices[i]];
    }
    for (int i = 0; i < m; i++) {
        total_test_skill += b[test_indices[i]];
    }
    ll max_skill = total_prog_skill + total_test_skill;

    // Output the results for each excluded candidate
    for (int i = 0; i < n + m + 1; i++) {
        // Recalculate max_skill excluding the i-th candidate
        // Find if i-th candidate was among the top selected programmers or testers
        bool is_prog = find(prog_indices.begin(), prog_indices.begin() + n, i) != prog_indices.begin() + n;
        bool is_test = find(test_indices.begin(), test_indices.begin() + m, i) != test_indices.begin() + m;

        ll skill_without_i = max_skill;

        if (is_prog) {
            // Recalculate programming part
            skill_without_i -= a[i];
            // Add the next best programmer if available
            if (n < n + m + 1) {
                skill_without_i += a[prog_indices[n]];
            }
        }
        if (is_test) {
            // Recalculate testing part
            skill_without_i -= b[i];
            // Add the next best tester if available
            if (m < n + m + 1) {
                skill_without_i += b[test_indices[m]];
            }
        }

        cout << skill_without_i << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
