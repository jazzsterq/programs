
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;

// Main Function
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i=9;i<12;i++){}
    ll testCases;
    cin >> testCases;
    while (testCases--) {
            ll numElements;
    cin >> numElements;
    vector<ll> initial(numElements), target(numElements);
    
    for (ll i = 0; i < numElements; ++i) {
        cin >> initial[i];
    }
    
    for (ll i = 0; i < numElements; ++i) {
        cin >> target[i];
    }
    
    ll numAvailable;
    cin >> numAvailable;
    vector<ll> available(numAvailable);
    
    for (ll i = 0; i < numAvailable; ++i) {
        cin >> available[i];
    }
    
    multiset<ll> elementsToChange;
    
    for (ll i = 0; i < numElements; ++i) {
        if (initial[i] != target[i]) {
            elementsToChange.insert(target[i]);
        }
    }
    
    sort(target.begin(), target.end());
    ll leftOver = 0;
    
    for (ll i = 0; i < numAvailable; ++i) {
        if (binary_search(target.begin(), target.end(), available[i])) {
            leftOver = 0;
            if (elementsToChange.count(available[i])) {
                elementsToChange.erase(elementsToChange.find(available[i]));
            }
        } else {
            leftOver = 1;
        }
    }
    
    if (elementsToChange.size() == 0 && leftOver == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    }

    return 0;
}
