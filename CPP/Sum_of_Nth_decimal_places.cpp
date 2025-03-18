#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, n;

    while (cin >> a >> b >> n) {
        vector<int> remainders;
        int remainder = a % b;
        while (remainder != 0 && find(remainders.begin(), remainders.end(), remainder) == remainders.end()) {
            remainders.push_back(remainder);
            remainder = (remainder * 10) % b;
        }

        int period = remainders.size();
        int sum = 0;

        if (period == 0) {
            sum = 0;
        } else if (n <= period) {
            for (int i = 0; i < n; i++) {
                sum += remainders[i] * 10 / b;
            }
        } else {
            for (int i = 0; i < period; i++) {
                sum += remainders[i] * 10 / b;
            }
            sum *= n / period;
            for (int i = 0; i < n % period; i++) {
                sum += remainders[i] * 10 / b;
            }
        }

        cout << sum << endl;
    }

    return 0;
}