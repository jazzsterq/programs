#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to count the subsets with a given sum using brute force
int countSubsetsWithSum(vector<int>& arr, int target) {
    int count = 0;
    int n = arr.size();
    // Iterate over all possible subsets using bit-masking
    for (int mask = 0; mask < (1 << n); ++mask) {
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                sum += arr[i];
            }
        }
        if (sum == target) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> arr;
    int Q; 
    cin >> Q;

    while (Q--) {
        int type, X;
        cin >> type >> X;

        switch (type) {
            case 0:
                arr.push_back(X);
                break;
            case 1: 
                arr.erase(remove(arr.begin(), arr.end(), X), arr.end());
                break;
            case 2: { 
                int result = countSubsetsWithSum(arr, X);
                cout << result <<" ";
                break;
            }
        }
    }

    return 0;
}
