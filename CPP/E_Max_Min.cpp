#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <iterator>
using namespace std;
typedef long long ll;

class FenwickTree {
public:
    vector<ll> tree;
    int n;

    FenwickTree(int size) : n(size) {
        tree.assign(size + 1, 0);
    }

    void update(int idx, ll val) {
        while (idx <= n) {
            tree[idx] += val;
            idx += idx & -idx;
        }
    }

    ll query(int idx) {
        ll sum = 0;
        while (idx > 0) {
            sum += tree[idx];
            idx -= idx & -idx;
        }
        return sum;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Coordinate compression
    map<int, int> compress;
    vector<int> sorted_a(a);
    sort(sorted_a.begin(), sorted_a.end());
    sorted_a.erase(unique(sorted_a.begin(), sorted_a.end()), sorted_a.end());

    int compress_idx = 1;
    for (int num : sorted_a) {
        compress[num] = compress_idx++;
    }

    FenwickTree bit(n);

    ll result = 0;
    for (int i = n - 1; i >= 0; --i) {
        int idx = compress[a[i]];
        // Query for all counts of divisions that have been processed
        result += bit.query(idx);
        // Update the BIT for this element
        for (int k = 1; k * a[i] <= sorted_a.back(); ++k) {
            int high = min(k * a[i], sorted_a.back());
            if (compress.count(high)) {
                bit.update(compress[high], 1);
            }
        }
    }

    cout << result << endl;
    return 0;
}
