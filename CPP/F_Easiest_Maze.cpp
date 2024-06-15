#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N = 3, M = 3, K = 7;

    // Prepare the grid layout
    vector<string> grid(2 * N + 2, string(2 * M + 1, '+'));
    for (int i = 1; i <= 2 * N + 1; i += 2) {
        for (int j = 1; j <= 2 * M; j++) {
            if (j % 2 == 1) grid[i][j] = 'o';
            else grid[i][j] = '?';
        }
    }
    for (int i = 2; i <= 2 * N; i += 2) {
        for (int j = 1; j <= 2 * M; j++) {
            if (j % 2 == 0) grid[i][j] = '+';
            else grid[i][j] = '?';
        }
    }

    // Set entrance and exit
    grid[0][2 * M] = 'S';
    grid[2 * N + 1][2 * M] = 'G';

    // Define a path that covers K cells
    // Example path based on the given output (3,3,7):
    // Horizontal right on the first row, then vertical down and one left on the last row
    grid[1][2 * M - 1] = '.'; // Path right in the first row
    grid[1][2 * M] = '.';
    grid[1][2 * M + 1] = '.';
    grid[3][2 * M + 1] = '.'; // Vertical in the last column
    grid[5][2 * M + 1] = '.';
    grid[5][2 * M] = '.'; // Move left in the last row
    grid[5][2 * M - 1] = '.';

    // Set all other connections as walls
    for (int i = 1; i <= 2 * N + 1; i++) {
        for (int j = 1; j <= 2 * M; j++) {
            if (grid[i][j] == '?') {
                if (i % 2 == 1) grid[i][j] = '|'; // Vertical wall separator
                else grid[i][j] = '-'; // Horizontal wall separator
            }
        }
    }

    // Output the result
    cout << "Yes" << endl;
    for (const string& line : grid) {
        cout << line << endl;
    }

    return 0;
}
