#include <iostream>
#include <vector>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int findNumberAt(int idx) {
    int low = 1, high = 2e9; // Set high estimate for the upper bound of the search
    while (low < high) {
        int mid = low + (high - low) / 2;
        long long count = 0;

        // Simulate the sequence creation to determine the index of the mid value
        for (int i = 1; i <= mid; i++) {
            count += countSetBits(i);
            if (count > idx) break; // Early exit if we pass the index
        }

        if (count >= idx) high = mid; // The mid index is too high or just right
        else low = mid + 1; // The mid index is too low
    }
    return low;
}

vector<int> solve(vector<int>& queries) {
    vector<int> results;
    for (int query : queries) {
        results.push_back(findNumberAt(query + 1));
    }
    return results;
}

int main() {
    int n;
    cout << "Enter number of queries: ";
    cin >> n;

    vector<int> queries(n);
    cout << "Enter the queries indices: ";
    for (int i = 0; i < n; i++) {
        cin >> queries[i];
    }

    vector<int> result = solve(queries);
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
