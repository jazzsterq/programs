#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class SegmentTree {
public:
    SegmentTree(int n) {
        size = n;
        tree.resize(4 * n, 0);
    }

    void update(int idx, int value, int node, int start, int end) {
        if (start == end) {
            tree[node] = value;
        } else {
            int mid = (start + end) / 2;
            if (idx <= mid) {
                update(idx, value, 2 * node, start, mid);
            } else {
                update(idx, value, 2 * node + 1, mid + 1, end);
            }
            tree[node] = max(tree[2 * node], tree[2 * node + 1]);
        }
    }

    void update(int idx, int value) {
        update(idx, value, 1, 0, size - 1);
    }

    int query(int l, int r, int node, int start, int end) {
        if (l > end || r < start) {
            return 0;
        }
        if (l <= start && end <= r) {
            return tree[node];
        }
        int mid = (start + end) / 2;
        int left_query = query(l, r, 2 * node, start, mid);
        int right_query = query(l, r, 2 * node + 1, mid + 1, end);
        return max(left_query, right_query);
    }

    int query(int l, int r) {
        return query(l, r, 1, 0, size - 1);
    }

private:
    int size;
    vector<int> tree;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, Q;
    cin >> N >> Q;
    
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    vector<pair<int, int>> queries(Q);
    for (int i = 0; i < Q; ++i) {
        cin >> queries[i].first >> queries[i].second;
    }

    SegmentTree segTree(N + 1);
    unordered_map<int, int> freq;
    unordered_map<int, int> countOfFreq;

    auto incrementFrequency = [&](int value) {
        if (freq[value] > 0) {
            countOfFreq[freq[value]]--;
            if (countOfFreq[freq[value]] == 0) {
                segTree.update(freq[value], 0);
            }
        }
        freq[value]++;
        countOfFreq[freq[value]]++;
        segTree.update(freq[value], countOfFreq[freq[value]]);
    };

    auto decrementFrequency = [&](int value) {
        countOfFreq[freq[value]]--;
        if (countOfFreq[freq[value]] == 0) {
            segTree.update(freq[value], 0);
        }
        freq[value]--;
        if (freq[value] > 0) {
            countOfFreq[freq[value]]++;
            segTree.update(freq[value], countOfFreq[freq[value]]);
        }
    };

    for (int val : A) {
        incrementFrequency(val);
    }

    for (const auto& query : queries) {
        int P = query.first - 1;
        int X = query.second;

        int old_value = A[P];
        A[P] = X;

        decrementFrequency(old_value);
        incrementFrequency(X);

        int maxFrequency = segTree.query(1, N);
        long long result = maxFrequency * N; // since min_sum will be maxFrequency * N
        cout << result << "\n";
    }

    return 0;
}
