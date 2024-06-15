#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isValid(const vector<int>& A, const vector<int>& B, int n) {
    for (int i = 0; i < n; ++i) {
        if (A[i] + B[i] - 1 != n) return false;
    }
    return true;
}

vector<int> constructPermutation(const vector<int>& A, const vector<int>& B, int n) {
    vector<int> P(n, -1); // Initialize permutation with -1
    
    // This part requires a specific construction algorithm to fill in P based on A and B
    
    return P;
}

void solveTestCase() {
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    for (int& a : A) cin >> a;
    for (int& b : B) cin >> b;
    
    if (!isValid(A, B, n)) {
        cout << "-1\n";
        return;
    }
    
    vector<int> P = constructPermutation(A, B, n);
    for (int p : P) cout << p << " ";
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solveTestCase();
    return 0;
}
