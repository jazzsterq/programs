
#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    while (n > 0) {
        int res = 1;
        int state[6] = {1, 2, 3, 4, 5, 6};
        for (int i = 0; i < n; i++) {
            std::string op;
            std::cin >> op;
            if (op == "North") {
                int t = state[0];
                state[0] = state[1];
                state[1] = state[5];
                state[5] = state[4];
                state[4] = t;
                
            } else if (op == "South") {

                int t = state[0];
                state[0] = state[4];
                state[4] = state[5];
                state[5] = state[1];
                state[1] = t;
            } else if (op == "East") {
                int t = state[0];
                state[0] = state[3];
                state[3] = state[5];
                state[5] = state[2];
                state[2] = t;

            } else if (op == "West") {

                int t = state[0];
                state[0] = state[2];
                state[2] = state[5];
                state[5] = state[3];
                state[3] = t;
            } else if (op == "Right") {
                int t = state[1];
                state[1] = state[2];
                state[2] = state[4];
                state[4] = state[3];
                state[3] = t;
            } else if (op == "Left") {
                int t = state[1];
                state[1] = state[3];
                state[3] = state[4];
                state[4] = state[2];
                state[2] = t;
            }
            res += state[0];
        }

        std::cout << res << std::endl;
        std::cin >> n;
    }
    return 0;
}