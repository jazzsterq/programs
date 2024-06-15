#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>

using namespace std;

// Function to perform BFS and find shortest path distances from start node
vector<int> bfs(int start, int n, const vector<vector<int>>& adj) {
    vector<int> dist(n + 1, -1);  // Distance initialization
    queue<int> q;
    q.push(start);
    dist[start] = 0;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : adj[node]) {
            if (dist[neighbor] == -1) {
                dist[neighbor] = dist[node] + 1;
                q.push(neighbor);
            }
        }
    }
    return dist;
}

// Function to compute the minimum steps to paint all vertices blue
int min_steps_to_paint_all_blue(int n, int a, int b, const vector<vector<int>>& adj) {
    vector<int> dist_a = bfs(a, n, adj); // BFS from a
    vector<int> dist_b = bfs(b, n, adj); // BFS from b

    int max_steps = 0;
    for (int v = 1; v <= n; ++v) {
        if (dist_a[v] != -1 && dist_b[v] != -1) {  // Both must be reachable
            // PB can paint blue after PA paints it red, or when it reaches there whichever is later
            int turn_blue_step = max(dist_a[v] + 1, dist_b[v]);
            max_steps = max(max_steps, turn_blue_step);
        }
    }
    return max_steps;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        vector<vector<int>> adj(n + 1);  // Adjacency list for graph

        for (int i = 1; i < n; ++i) { // Reading edges
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        // Compute the result for this test case and print it
        cout << min_steps_to_paint_all_blue(n, a, b, adj) << '\n';
    }

    return 0;
}
