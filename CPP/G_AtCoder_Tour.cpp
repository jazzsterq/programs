#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

bool canAchieve(vector<vector<int>>& A, int H, int W, int K, int Si, int Sj, long long targetFun) {
    // Use BFS to check if we can achieve at least 'targetFun' within 'K' steps
    queue<pair<int, int>> q;
    vector<vector<long long>> maxFun(H, vector<long long>(W, -1));
    q.push({Si, Sj});
    maxFun[Si][Sj] = A[Si][Sj];

    int steps = 0;
    int dr[] = {0, 1, 0, -1, 0};
    int dc[] = {1, 0, -1, 0, 0};

    while (!q.empty() && steps < K) {
        int sz = q.size();
        while (sz-- > 0) {
            auto [r, c] = q.front();
            q.pop();
            for (int i = 0; i < 5; i++) {
                int nr = r + dr[i];
                int nc = c + dc[i];
                if (nr >= 0 && nr < H && nc >= 0 && nc < W) {
                    long long newFun = maxFun[r][c] + A[nr][nc];
                    if (newFun > maxFun[nr][nc]) {
                        maxFun[nr][nc] = newFun;
                        q.push({nr, nc});
                    }
                }
            }
        }
        steps++;
    }

    // Check if any cell has achieved the target fun value
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (maxFun[i][j] >= targetFun) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int H, W, K;
    int Si, Sj;
    cin >> H >> W >> K >> Si >> Sj;
    Si--; Sj--;
    vector<vector<int>> A(H, vector<int>(W));
    long long maxVal = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
            maxVal = max(maxVal, (long long)A[i][j]);
        }
    }

    long long low = A[Si][Sj];
    long long high = maxVal * K;
    long long answer = low;

    while (low <= high) {
        long long mid = (low + high) / 2;
        if (canAchieve(A, H, W, K, Si, Sj, mid)) {
            answer = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << answer << endl;
    return 0;
}
