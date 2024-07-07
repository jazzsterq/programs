#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int operations = 0;
        // Adjust for 1-based indexing during the check
        for (int i = 0; i < n; ++i) {
            // Check if the current index (1-based) matches the element value
            if (a[i] == i + 1) { // plus one because we need 1-based index
                if (i + 1 < n) { // ensure there's a next element to remove
                    operations++;
                    // Perform removal by shifting elements left to overwrite ai and ai+1
                    for (int j = i + 2; j < n; ++j) {
                        a[j - 2] = a[j];
                    }
                    n -= 2; // Reduce size of the array as two elements are removed
                    i--; // Adjust index to reflect new array structure
                }
            }
        }

        cout << operations << endl;
    }
    return 0;
}
