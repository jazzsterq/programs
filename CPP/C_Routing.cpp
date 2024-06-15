#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <climits>
using namespace std;

typedef pair<int, int> pii;
const int MAXN = 1000;
const vector<pii> dirs = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

struct State {
    int x, y, cost;
    bool operator>(const State& other) const {
        return cost > other.cost;
    }
};

void bfs(vector<vector<int>>& cost, vector<vector<char>>& grid, int startX, int startY, char allowedColor) {
    int n = grid.size();
    priority_queue<State, vector<State>, greater<State>> pq;
    pq.push({startX, startY, grid[startX][startY] != allowedColor});
    cost[startX][startY] = grid[startX][startY] != allowedColor;

    while (!pq.empty()) {
        State s = pq.top(); pq.pop();
        if (s.cost > cost[s.x][s.y]) continue;
        for (auto& d : dirs) {
            int nx = s.x + d.first, ny = s.y + d.second;
            if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                int newCost = s.cost + (grid[nx][ny] != allowedColor);
                if (newCost < cost[nx][ny]) {
                    cost[nx][ny] = newCost;
                    pq.push({nx, ny, newCost});
                }
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<vector<char>> grid(n, vector<char>(n));
    vector<vector<int>> cost1(n, vector<int>(n, INT_MAX)), cost2(n, vector<int>(n, INT_MAX));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> grid[i][j];
        }
    }

    // Red path from top-left to bottom-right
    bfs(cost1, grid, 0, 0, 'R');
    // Blue path from top-right to bottom-left
    bfs(cost2, grid, 0, n-1, 'B');

    int minCost = INT_MAX;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            // Since each path may require changing a cell to purple
            int combinedCost = cost1[i][j] + cost2[i][j];
            if (grid[i][j] != 'P') combinedCost -= (cost1[i][j] && cost2[i][j]);
            minCost = min(minCost, combinedCost);
        }
    }

    cout << minCost << endl;
    return 0;
}
