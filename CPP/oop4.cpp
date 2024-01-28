#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;
const ll MAX_SIZE = 1000001;
const ll BITS = 21;
const ll NO_RESULT = -1;

// Function for handling each test case
void handleTestCase() {
    ll itemCount;
    cin >> itemCount;
    vector<ll> data(itemCount);

    // Input for array items
    for(ll index = 0; index < itemCount; ++index) {
        cin >> data[index];
    }

    // Array to store positions for each bit
    vector<ll> positionsForBits[BITS];
    for(ll i = 0; i < itemCount; ++i) {
        for(ll bit = 0; bit < BITS; ++bit) {
            if(data[i] & (1LL << bit)) 
                positionsForBits[bit].push_back(i + 1);
        }
    }

    ll queryCount;
    cin >> queryCount;
    while(queryCount--) {
        ll smallestIndex = MAX_SIZE, firstBound = NO_RESULT, secondBound = MAX_SIZE;
        ll targetIndex, targetValue;
        cin >> targetIndex >> targetValue;

        for(ll bit = BITS - 1; bit >= 0; --bit) {
            if (positionsForBits[bit].empty()) continue;

            auto iter = lower_bound(begin(positionsForBits[bit]), end(positionsForBits[bit]), targetIndex);

            if (targetValue < (1LL << bit) && firstBound == NO_RESULT) {
                if (iter != end(positionsForBits[bit])) {
                    smallestIndex = min(smallestIndex, *iter);
                }
            }
            else if (targetValue >= (1LL << bit)) {
                if (iter != end(positionsForBits[bit])) {
                    firstBound = max(firstBound, *iter);
                    targetValue -= (1LL << bit);
                }
            }
        }

        if (targetValue > 0) firstBound = NO_RESULT;

        ll result = (firstBound > 0) ? min(min(smallestIndex, firstBound), secondBound) 
                                    : (min(smallestIndex, secondBound) == MAX_SIZE ? NO_RESULT 
                                                                                  : min(smallestIndex, secondBound));
        cout << result << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll tests = 1;
    // Uncomment the next line to read number of tests
    // cin >> tests;
    while(tests--) {
        handleTestCase();
    }
    return 0;
}
