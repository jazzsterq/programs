#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <algorithm>
#include <utility>

using namespace std;

class WeightedDirectedGraph {
private:
    unordered_map<int, vector<pair<int,int>>> adj;

public:

    void addNode(int node, const vector<pair<int,int>>& adjacencyList) {
        if (!adj.count(node)) {
            adj[node] = {};
        }

        for (auto &edge : adjacencyList) {
            addEdge(node, edge.first, edge.second);
        }
    }

    
    void addEdge(int from, int to, int weight) {
        
        if (!adj.count(from)) {
            adj[from] = {};
        }
        if (!adj.count(to)) {
            adj[to] = {};
        }
        
        adj[from].push_back({to, weight});
    }

    
    
    void removeNodeBFS(int start, int target) {
        
        if (bfsSearch(start, target)) {
            removeNode(target);
            cout << "Node " << target << " removed from the graph.\n";
        } else {
            cout << "Node " << target << " not found in BFS starting at " << start << ".\n";
        }
    }

    
    bool bfsSearch(int start, int target) {
        
        if (!adj.count(start) || !adj.count(target)) {
            return false;
        }
        unordered_set<int> visited;
        queue<int> q;

        visited.insert(start);
        q.push(start);

        while (!q.empty()) {
            int current = q.front();
            q.pop();
            if (current == target) {
                return true;
            }
            for (auto &edge : adj[current]) {
                int neighbor = edge.first;
                if (!visited.count(neighbor)) {
                    visited.insert(neighbor);
                    q.push(neighbor);
                }
            }
        }
        return false;
    }

    
    void removeNode(int node) {
        if (!adj.count(node)) {
            return;
        }
        
        adj.erase(node);

        
        for (auto &kv : adj) {
            auto &neighbors = kv.second;
            neighbors.erase(
                remove_if(neighbors.begin(), neighbors.end(),
                          [node](auto &edge) {
                              return edge.first == node;
                          }),
                neighbors.end()
            );
        }
    }

    
    vector<pair<int,int>> getAdjacent(int node) {
        if (!adj.count(node)) {
            return {};
        }
        return adj[node];
    }

    
    
    
    int outDegree(int node) {
        if (!adj.count(node)) {
            return 0;
        }
        return static_cast<int>(adj[node].size());
    }

    int inDegree(int node) {
        int deg = 0;
        for (auto &kv : adj) {
            for (auto &edge : kv.second) {
                if (edge.first == node) {
                    deg++;
                }
            }
        }
        return deg;
    }

    
    void printGraph() {
        cout << "Adjacency List of the Graph:\n";
        for (auto &kv : adj) {
            cout << kv.first << " -> ";
            for (auto &edge : kv.second) {
                cout << "(" << edge.first << ", w=" << edge.second << ") ";
            }
            cout << "\n";
        }
        cout << endl;
    }

    
    
    
    
    void findIsolatedAndPendant() {
        vector<int> isolated;
        vector<int> pendant;

        for (auto &kv : adj) {
            int node = kv.first;
            int degIn = inDegree(node);
            int degOut = outDegree(node);
            int totalDeg = degIn + degOut;

            if (totalDeg == 0) {
                isolated.push_back(node);
            } else if (totalDeg == 1) {
                pendant.push_back(node);
            }
        }

        cout << "Isolated vertices: ";
        if (isolated.empty()) cout << "(none)";
        for (int v : isolated) {
            cout << v << " ";
        }
        cout << "\n";

        cout << "Pendant vertices: ";
        if (pendant.empty()) cout << "(none)";
        for (int v : pendant) {
            cout << v << " ";
        }
        cout << "\n\n";
    }

    
    
    vector<int> findPath(int start, int end) {
        vector<int> path;
        if (!adj.count(start) || !adj.count(end)) {
            return path; 
        }

        
        unordered_map<int, int> parent;
        parent[start] = -1;  

        queue<int> q;
        q.push(start);
        bool found = false;

        
        while (!q.empty() && !found) {
            int current = q.front();
            q.pop();

            for (auto &edge : adj[current]) {
                int neighbor = edge.first;
                
                if (!parent.count(neighbor)) {
                    parent[neighbor] = current;
                    if (neighbor == end) {
                        found = true;
                        break;
                    }
                    q.push(neighbor);
                }
            }
        }

        
        if (found) {
            int cur = end;
            while (cur != -1) {
                path.push_back(cur);
                cur = parent[cur];
            }
            reverse(path.begin(), path.end());
        }
        return path;
    }
};



int main() {
    WeightedDirectedGraph g;

    
    g.addNode(0, {{1,10}, {2,5}});

    
    g.addEdge(1, 3, 2);
    g.addEdge(2, 4, 3);
    g.addEdge(2, 5, 1);
    g.addEdge(3, 5, 4);

    
    g.printGraph();

    
    vector<int> path = g.findPath(0, 5);
    if (!path.empty()) {
        cout << "Path from 0 to 5: ";
        for (int v : path) {
            cout << v << " ";
        }
        cout << "\n\n";
    } else {
        cout << "No path found from 0 to 5.\n\n";
    }

    
    g.findIsolatedAndPendant();

    
    g.removeNodeBFS(0, 4);

    g.printGraph();

    vector <pair<int,int>> aa = g.getAdjacent(0);
    for(int i=0;i<aa.size();i++){
        cout<<aa[i].first<< " "<<aa[i].second<<endl;
    }
    cout<<g.inDegree(0)<<" "<<g.outDegree(0)<<endl;
    return 0;
}