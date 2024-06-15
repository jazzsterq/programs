#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Game {
private:
    vector<int> A;
    vector<int> B;
    int N;
    unordered_map<int, bool> memo;

    bool canWin(int state) {
        // If the state has been calculated before, return the result
        if (memo.find(state) != memo.end()) {
            return memo[state];
        }

        // Attempt to remove every pair of cards and see if that leads to a win
        bool win = false;
        for (int i = 0; i < N; ++i) {
            if (!(state & (1 << i))) continue;
            for (int j = i + 1; j < N; ++j) {
                if (!(state & (1 << j))) continue;
                if (A[i] == A[j] || B[i] == B[j]) {
                    // Move and remove cards i and j
                    int next_state = state & ~(1 << i) & ~(1 << j);
                    // If opponent cannot win from next state, current player can win
                    if (!canWin(next_state)) {
                        win = true;
                        break;
                    }
                }
            }
            if (win) break;
        }

        // Memorize and return the result
        memo[state] = win;
        return win;
    }

public:
    Game(const vector<int>& A, const vector<int>& B) : A(A), B(B) {
        N = A.size();
    }

    string whoWins() {
        // Initially, all cards are on the table
        int initial_state = (1 << N) - 1;
        // If the first player can win, return their name
        return canWin(initial_state) ? "Takahashi" : "Aoki";
    }
};

int main() {
    int N;
    cin>>N;
    vector<int> A(N),B(N);
    for(int i=0;i<N;i++)cin>>A[i]>>B[i];
    
    Game game(A, B);
    cout << game.whoWins() << endl;  // Output will depend on the specific input

    return 0;
}
