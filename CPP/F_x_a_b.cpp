#include <iostream>
#include <set>
#include <cmath>
#include <cstdint>

typedef long long ll;

int main() {
    ll N;
    std::cin >> N;
    
    std::set<ll> unique_values;

    ll max_b = std::log2(N); // maximum value for b where 2^b <= N
    for (ll b = 2; b <= max_b; ++b) {
        ll max_a = std::pow(N, 1.0 / b);
        for (ll a = 2; a <= max_a; ++a) {
            ll value = 1;
            bool too_large = false;
            for (ll i = 0; i < b; ++i) {
                if (value > N / a) { // Check for overflow or exceeding N
                    too_large = true;
                    break;
                }
                value *= a;
            }
            if (too_large) break;
            unique_values.insert(value);
        }
    }

    // Output the number of unique values
    std::cout << unique_values.size() << std::endl;

    return 0;
}
