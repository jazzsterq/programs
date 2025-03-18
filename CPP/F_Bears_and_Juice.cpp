#include <vector>
#include <functional>
#include <limits>

using namespace std;

template<typename T>
class SegmentTree {
private:
    vector<T> tree;
    vector<T> lazy;
    T n;
    function<T(T, T)> func;
    T identity;

    void build(vector<T>& arr, T node, T start, T end) {
        if (start == end) {
            tree[node] = arr[start];
        } else {
            T mid = (start + end) / 2;
            build(arr, 2 * node + 1, start, mid);
            build(arr, 2 * node + 2, mid + 1, end);
            tree[node] = func(tree[2 * node + 1], tree[2 * node + 2]);
        }
    }

    void updateRangeUtil(T node, T start, T end, T l, T r, T val) {
        if (lazy[node] != identity) {
            tree[node] += lazy[node];  // This operation should be generic based on the type of update (sum, min, etc.)

            if (start != end) {
                lazy[2 * node + 1] += lazy[node];
                lazy[2 * node + 2] += lazy[node];
            }

            lazy[node] = identity;
        }

        if (start > end || start > r || end < l)
            return;

        if (start >= l && end <= r) {
            tree[node] += val;  // Similarly, this needs to be generic

            if (start != end) {
                lazy[2 * node + 1] += val;
                lazy[2 * node + 2] += val;
            }
            return;
        }

        T mid = (start + end) / 2;
        updateRangeUtil(2 * node + 1, start, mid, l, r, val);
        updateRangeUtil(2 * node + 2, mid + 1, end, l, r, val);
        tree[node] = func(tree[2 * node + 1], tree[2 * node + 2]);
    }

    T queryRangeUtil(T node, T start, T end, T l, T r) {
        if (start > end || start > r || end < l)
            return identity;

        if (lazy[node] != identity) {
            tree[node] += lazy[node];

            if (start != end) {
                lazy[2 * node + 1] += lazy[node];
                lazy[2 * node + 2] += lazy[node];
            }

            lazy[node] = identity;
        }

        if (start >= l && end <= r)
            return tree[node];

        T mid = (start + end) / 2;
        T left_query = queryRangeUtil(2 * node + 1, start, mid, l, r);
        T right_query = queryRangeUtil(2 * node + 2, mid + 1, end, l, r);
        return func(left_query, right_query);
    }

public:
    SegmentTree(vector<T>& arr, function<T(T, T)> f, T id) : func(f), identity(id) {
        n = arr.size();
        tree.resize(4 * n);
        lazy.resize(4 * n, identity);
        build(arr, 0, 0, n - 1);
    }

    void update_range(T l, T r, T val) {
        updateRangeUtil(0, 0, n - 1, l, r, val);
    }

    T query_range(T l, T r) {
        return queryRangeUtil(0, 0, n - 1, l, r);
    }
};

// Example usage:
int main() {
    vector<long long> arr = {1, 3, 5, 7, 9, 11};
    SegmentTree<long long> st(arr, [](long long a, long long b) { return min(a, b); }, numeric_limits<long long>::max());
    cout << "Minimum in range (1, 3): " << st.query_range(1, 3) << endl;
    st.update_range(1, 3, 5);
    cout << "Minimum in range (1, 3) after update: " << st.query_range(1, 3) << endl;
    return 0;
}
