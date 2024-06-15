#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5+5;
vector<int> adj[MAXN]; // Adjacency list for the tree
int merit[MAXN], startTime[MAXN], endTime[MAXN], eulerTour[2*MAXN], timer = 0;
int answer[MAXN];
vector<int> values; // For coordinate compression
map<int, int> valueToIndex; // Map actual values to indices for the Fenwick tree

struct FenwickTree {
    vector<int> bit; // Binary Indexed Tree
    int n;

    FenwickTree(int n) {
        this->n = n;
        bit.assign(n + 1, 0);
    }

    void update(int idx, int delta) {
        while (idx <= n) {
            bit[idx] += delta;
            idx += idx & -idx;
        }
    }

    int query(int idx) {
        int sum = 0;
        while (idx > 0) {
            sum += bit[idx];
            idx -= idx & -idx;
        }
        return sum;
    }

    // Query range sum
    int rangeQuery(int l, int r) {
        return query(r) - query(l - 1);
    }
};

void dfs(int v, int p = -1) {
    startTime[v] = ++timer;
    eulerTour[timer] = v;
    for (int u : adj[v]) {
        if (u != p) dfs(u, v);
    }
    endTime[v] = ++timer;
    eulerTour[timer] = v;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> merit[i];
        values.push_back(merit[i]);
    }
    sort(values.begin(), values.end());
    values.erase(unique(values.begin(), values.end()), values.end());

    // Coordinate compression for values
    for (int i = 0; i < values.size(); ++i) {
        valueToIndex[values[i]] = i + 1; // 1-indexed
    }

    for (int i = 1; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1); // Perform Euler tour

    FenwickTree ft(timer); // Initialize Fenwick tree with the size of the Euler tour

    // Update the Fenwick tree with the Euler tour representation
    for (int i = 1; i <= timer; ++i) {
        int node = eulerTour[i];
        int idx = valueToIndex[merit[node]];
        ft.update(i, 1); // Increment the frequency of the node's value at its start time
        if (endTime[node] < timer) ft.update(endTime[node] + 1, -1); // Decrement to nullify when the subtree ends
    }

    // Calculate the answer for each node
    for (int i = 1; i <= n; ++i) {
        int freq = ft.rangeQuery(startTime[i], endTime[i]);
        answer[i] = (freq == merit[i]) ? 1 : 0;
    }

    for (int i = 1; i <= n; ++i) {
        cout << answer[i] << " ";
    }
    cout << endl;

    return 0;
}
