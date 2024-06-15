#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, L, R;
    cin >> N >> L >> R;

    int total_sum = 0;
    int power_of_two = 1 << N; // This is 2^N

    // We need to cover range [L, R]
    while (L <= R) {
        int i = 0;
        // Find the largest power of 2 that can fit in the remaining range
        while ((1 << (i + 1)) <= (R - L + 1) && (1 << (i + 1)) + L - 1 <= power_of_two - 1) {
            i++;
        }

        int block_size = 1 << i;
        int j = L / block_size;

        // Ensure the block fits within the range
        if (j * block_size < L) j++;
        if ((j + 1) * block_size - 1 > R) break; // This block would exceed R

        // Print query
        cout << "? " << i << " " << j << endl;

        int response;
        cin >> response;

        if (response == -1) {
            // Invalid response, terminate immediately
            return 0;
        }

        total_sum = (total_sum + response) % 100;
        L = (j + 1) * block_size; // Move L to the end of the current block
    }

    // Output the final result
    cout << "! " << total_sum << endl;
    return 0;
}
