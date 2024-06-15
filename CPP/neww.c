#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);  // Read number of test cases
    while (t--) {
        int p, x, r1;
        scanf("%d %d %d", &p, &x, &r1);  // Read p, x, r1
        int n, y, r2;
        scanf("%d %d %d", &n, &y, &r2);  // Read n, y, r2

        int d1 = p / x + r1;
        int d2 = n / y + r2;

        if (d1 == d2) {
            printf("BOTH\n");
            printf("%d\n", d1);
        } else if (d1 < d2) {
            printf("PAUL\n");
            printf("%d\n", d1);
        } else {
            printf("NINA\n");
            printf("%d\n", d2);
        }
    }
    return 0;
}
