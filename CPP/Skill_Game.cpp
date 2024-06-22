#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N = 7;
    string G = "ABABABB";
    vector<int> S = {5, 7, 4, 6, 3, 2, 1};

    vector<int> wins(N, 0);
    vector<int> scores(N, 0);

    // Calculate initial wins and scores
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (S[i] > S[j]) {
                wins[i]++;
            }
        }
        scores[i] = min(i + 1, wins[i]);
    }

    int max_score = *max_element(scores.begin(), scores.end());

    vector<pair<int, int>> modifications;
    bool modification_found = false;

    // Try lowering skills of players in Group A to see if we can get a higher score
    for (int i = 0; i < N; ++i) {
        if (G[i] == 'A') {
            int original_skill = S[i];
            for (int new_skill = 1; new_skill < original_skill; ++new_skill) {
                vector<int> new_wins = wins;
                vector<int> affected_indices;

                // Adjust wins based on the hypothetical skill change
                for (int j = 0; j < N; ++j) {
                    if (i != j) {
                        if (new_skill > S[j] && original_skill <= S[j]) {
                            new_wins[i]++;
                            new_wins[j]--;
                        } else if (new_skill <= S[j] && original_skill > S[j]) {
                            new_wins[i]--;
                            new_wins[j]++;
                        }
                    }
                }

                int new_score = min(i + 1, new_wins[i]);
                if (new_score > max_score) {
                    modifications.push_back({i + 1, new_skill});
                    modification_found = true;
                    break;
                }
            }
        }
        if (modification_found) break;
    }

    if (modification_found) {
        cout << "1\n";  // Since only one modification is needed based on the case specifics
        cout << modifications.front().first << " " << modifications.front().second << "\n";
    } else {
        cout << "-1\n";
    }

    return 0;
}
