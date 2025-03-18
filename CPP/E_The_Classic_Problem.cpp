#include <bits/stdc++.h>
using namespace std;
const int N = 514514;
const int MOD = 1e9 + 7;

int head[N], next_edge[N * 2], to[N * 2], edge_weight[N * 2];
int power2[N * 2], root[N], predecessor[N];
int n, m, s, t, max_weight, total_nodes = 0, edge_count = 0;

void add_edge(int u, int v, int w) {
    next_edge[++edge_count] = head[u];
    to[edge_count] = v;
    head[u] = edge_count;
    edge_weight[edge_count] = w;
}

struct SegmentTreeNode {
    int left_child, right_child;
    int value;
} segment_tree[N << 5];

bool compare(int x, int y, int l, int r) {
    if (l == r)
        return segment_tree[x].value > segment_tree[y].value;
    int mid = (l + r) >> 1;
    if (segment_tree[segment_tree[x].right_child].value == segment_tree[segment_tree[y].right_child].value)
        return compare(segment_tree[x].left_child, segment_tree[y].left_child, l, mid);
    return compare(segment_tree[x].right_child, segment_tree[y].right_child, mid + 1, r);
}

bool update(int x, int &y, int l, int r, int position) {
    y = ++total_nodes;
    segment_tree[y] = segment_tree[x];
    if (l == r) {
        segment_tree[y].value = segment_tree[x].value ^ 1;
        return segment_tree[x].value;
    }
    int mid = (l + r) >> 1;
    bool carry;
    if (position > mid) {
        carry = update(segment_tree[x].right_child, segment_tree[y].right_child, mid + 1, r, position);
    } else {
        carry = update(segment_tree[x].left_child, segment_tree[y].left_child, l, mid, position);
        if (carry)
            carry = update(segment_tree[x].right_child, segment_tree[y].right_child, mid + 1, r, mid + 1);
    }
    segment_tree[y].value = (1LL * segment_tree[segment_tree[y].right_child].value * power2[mid - l + 1] + segment_tree[segment_tree[y].left_child].value) % MOD;
    return carry;
}

struct NodeState {
    int node;
    int segment_tree_root;
    bool operator<(const NodeState &other) const {
        return compare(segment_tree_root, other.segment_tree_root, 0, max_weight);
    }
};

priority_queue<NodeState> pq;

void print_path(int x, int depth) {
    if (x == s) {
        printf("%d\n%d ", depth, x);
        return;
    }
    print_path(predecessor[x], depth + 1);
    printf("%d ", x);
}

void output_result(int x) {
    printf("%d\n", segment_tree[root[x]].value);
    print_path(x, 1);
    exit(0);
}

int main() {
    scanf("%d%d", &n, &m);
    int u, v, w;
    max_weight = 0;

    for (int i = 1; i <= m; ++i) {
        scanf("%d%d%d", &u, &v, &w);
        add_edge(u, v, w);
        add_edge(v, u, w);
        if (w > max_weight)
            max_weight = w;
    }
    max_weight += 100;

    power2[0] = 1;
    for (int i = 1; i <= max_weight; ++i)
        power2[i] = 1LL * power2[i - 1] * 2 % MOD;

    scanf("%d%d", &s, &t);

    pq.push({s, root[s]});
    while (!pq.empty()) {
        NodeState current = pq.top();
        pq.pop();

        if (current.segment_tree_root != root[current.node])
            continue;
        if (current.node == t)
            output_result(t);

        for (int i = head[current.node]; i; i = next_edge[i]) {
            int neighbor = to[i];
            int new_root;
            update(current.segment_tree_root, new_root, 0, max_weight, edge_weight[i]);

            if (!root[neighbor] || compare(root[neighbor], new_root, 0, max_weight)) {
                root[neighbor] = new_root;
                pq.push({neighbor, root[neighbor]});
                predecessor[neighbor] = current.node;
            }
        }
    }
    cout<<-1<<endl;
    return 0;
}
