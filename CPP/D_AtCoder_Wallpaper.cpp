#include <iostream>
using namespace std;

bool isBlack(int x, int y) {
    // Calculate changes due to each type of line
    int changes = (x / 1) + (y / 2) + ((x + y) / 2);
    return changes % 2 == 0;  // Color alternates starting with black at origin
}

long long twiceBlackArea(int A, int B, int C, int D) {
    long long blackArea = 0;
    long long totalArea = static_cast<long long>(C - A) * (D - B);

    // Iterate over each cell in the rectangle from A to C-1 and B to D-1
    for (int x = A; x < C; x++) {
        for (int y = B; y < D; y++) {
            if (isBlack(x, y)) {
                blackArea++;
            }
        }
    }
    
    // Return twice the area of black regions
    return 2 * blackArea;
}

int main() {
    int A, B, C, D;
    
    cout << "Enter coordinates A, B, C, D: ";
    cin >> A >> B >> C >> D;
    
    cout << "Twice the area of black regions: " << twiceBlackArea(A, B, C, D) << endl;
    
    return 0;
}
