#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        long long n, m, k;
        cin >> n >> m >> k;
        
        vector<pair<int, int>> fountains(k);
        for (int i = 0; i < k; ++i) {
            cin >> fountains[i].first >> fountains[i].second;
        }
        
        // Sort fountains by row and column
        sort(fountains.begin(), fountains.end());
        
        // Calculate the initial maximum plot size α
        long long alpha = n * m;
        
        // Output α
        cout << alpha << "\n";
        
        // For each fountain, we need to check if giving it to Alice increases her plot size
        for (int i = 0; i < k; ++i) {
            // If a fountain is in the first row or first column, it might help Alice expand her plot
            if (fountains[i].first == 1 || fountains[i].second == 1) {
                cout << 1 << " ";
            } else {
                cout << 0 << " ";
            }
        }
        cout << "\n";
    }
    
    return 0;
}
