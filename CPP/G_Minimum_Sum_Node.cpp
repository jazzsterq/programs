#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int MAXN = 1e5 + 5;

vector<int> adj[MAXN];
int subtree_size[MAXN];
int sum_of_distances[MAXN];
int answer_vertex;
int min_sum_of_distances = INT_MAX;

// DFS to calculate subtree sizes and sum of distances
void dfs(int node, int parent) {
    subtree_size[node] = 1;
    sum_of_distances[node] = 0;

    for (int child : adj[node]) {
        if (child != parent) {
            dfs(child, node);
            subtree_size[node] += subtree_size[child];
            sum_of_distances[node] += (sum_of_distances[child] + subtree_size[child]);
        }
    }
}

// DFS to calculate the answer vertex with minimum sum of distances
void dfs2(int node, int parent, int parent_sum_of_distances, int N) {
    int current_sum_of_distances = sum_of_distances[node] + parent_sum_of_distances + (N - subtree_size[node]);

    if (current_sum_of_distances < min_sum_of_distances) {
        min_sum_of_distances = current_sum_of_distances;
        answer_vertex = node;
    }

    for (int child : adj[node]) {
        if (child != parent) {
            int new_parent_sum_of_distances = current_sum_of_distances - (sum_of_distances[child] + subtree_size[child]);
            dfs2(child, node, new_parent_sum_of_distances, N);
        }
    }
}

int main() {
    int N;
    cout << "Enter the number of vertices in the tree: ";
    cin >> N;

    cout << "Enter the edges of the tree:\n";
    for (int i = 0; i < N - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Perform DFS to calculate subtree sizes and sum of distances
    dfs(1, -1);

    // Perform DFS to find the answer vertex with minimum sum of distances
    dfs2(1, -1, 0, N);

    cout << "Vertex with minimum sum of distances: " << answer_vertex << endl;

    return 0;
}
