#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

bool compare(const tuple<int, int>& a, const tuple<int, int>& b) {

    int al = get<0>(a), ar = get<1>(a);
    int bl = get<0>(b), br = get<1>(b);
    int aDist = ar - al;
    int bDist = br - bl;
    if (aDist == bDist) {
        return al < bl;
    }
    return aDist > bDist;
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> P(N);
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    vector<tuple<int, int>> operations;

    for (int l = 0; l < N; l++) {
        for (int r = l + K; r < N; r++) {
            if (P[l] > P[r]) {
                operations.emplace_back(l, r);
            }
        }
    }

    sort(operations.begin(), operations.end(), compare);

    cout << operations.size() << endl;
    for (auto &op : operations) {
        int l, r;
        tie(l, r) = op;
        cout << l+1 << " " << r+1 << endl; 
    }
    
    return 0;
}
