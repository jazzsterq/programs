#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate initial beauty of the permutation
int calculateBeauty(const vector<int>& P) {
    int beauty = 0;
    vector<bool> seen(P.size() + 1, false);
    int minRequired = 1;

    for (int i = 0; i < P.size(); i++) {
        seen[P[i]] = true;
        // Check if all numbers from 1 to i+1 are seen
        while (minRequired <= i + 1 && seen[minRequired]) {
            minRequired++;
        }
        if (minRequired > i + 1) {
            beauty++;
        }
    }
    return beauty;
}

// Function to apply the swapping operation and calculate new beauty
int applySwapAndCalculateBeauty(vector<int> P, int L, int R) {
    // Apply the swap operation as described
    for (int i = L; i < R; i += 2) {
        swap(P[i], P[i + 1]);
    }
    return calculateBeauty(P);
}

// Main solution function for each test case
int findMaxBeauty(vector<int>& P) {
    int n = P.size();
    int originalBeauty = calculateBeauty(P);
    int maxBeauty = originalBeauty;

    // Try every valid (L, R) pair and calculate the beauty after swapping
    for (int L = 0; L < n; L++) {
        for (int R = L + 1; R < n; R++) {
            if ((R - L + 1) % 2 == 0 && (L % 2 != R % 2)) { // R-L+1 is even and L, R have different parities
                int beautyAfterSwap = applySwapAndCalculateBeauty(P, L, R);
                maxBeauty = max(maxBeauty, beautyAfterSwap);
            }
        }
    }

    return maxBeauty;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> P(n);
        for (int i = 0; i < n; i++) {
            cin >> P[i];
        }

        cout << findMaxBeauty(P) << '\n';
    }
    return 0;
}
