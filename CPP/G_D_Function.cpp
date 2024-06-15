#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <climits>

using namespace std;

int countPaths(int n, vector<vector<int>>& roads) {
    const long long MODN = 1e9 + 7;
    vector<long long> dis(n, LLONG_MAX), num(n, 0);
    vector<vector<pair<int, int>>> adj(n);
    
    for (const auto& road : roads) {
        adj[road[0]].emplace_back(road[1], road[2]);
        adj[road[1]].emplace_back(road[0], road[2]);
    }
    
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> q;
    q.emplace(0, 0);
    dis[0] = 0;
    num[0] = 1;
    
    while (!q.empty()) {
        auto [time, node] = q.top();
        cout<<time<< " "<<node<< " "<<endl;
        q.pop();
        
        for (const auto& [neighbor, weight] : adj[node]) {
            if (dis[neighbor] > dis[node] + weight) {
                dis[neighbor] = dis[node] + weight;
                num[neighbor] = num[node];
                q.emplace(dis[neighbor], neighbor);
            } 
            else if (dis[neighbor] == dis[node] + weight) {
                num[neighbor] = (num[neighbor] + num[node]) % MODN;
            }
        }
    }
    
    return num[n - 1];
}

int main() {
    vector<vector<int>> roads = {{0,1,1},{1,2,4},{0,4,3},{3,2,5},{3,4,1},{3,0,5},{1,3,1}};
    int n = 5;
    cout << countPaths(n, roads) << endl;
    return 0;
}
