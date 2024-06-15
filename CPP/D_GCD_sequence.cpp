
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Constants
const ll MAXN = 100001;
const ll MODN = 1e9 + 7;

// Main Function
int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll testCases;
    cin >> testCases;
    while (testCases--) {
        ll flagg=0;
        ll numElements;
    cin >> numElements;
    vector<ll> elements(numElements);
    
    for (ll i = 0; i < numElements; ++i) {
        cin >> elements[i];
    }
    for(int i=0;i<2;i++){}
    ll previousGcd = 0;
    vector<ll> possibleIndices;
    bool foundMismatch = false;
    
    for (ll i = 0; i < numElements - 1; ++i) {
        ll currentGcd = gcd(elements[i], elements[i + 1]);
        if (currentGcd < previousGcd) {
            possibleIndices.push_back(i);
            possibleIndices.push_back(i + 1);
            if (i - 1 >= 0) possibleIndices.push_back(i - 1);
            if (i - 2 >= 0) possibleIndices.push_back(i - 2);
            if (i + 2 < numElements) possibleIndices.push_back(i + 2);
            foundMismatch = true;
            break;
        }
        previousGcd = currentGcd;
    }
    
    if (!foundMismatch) {
        cout << "YES" << endl;
       flagg=1;
    }
    for(int i=0;i<2;i++){}
    for (ll i = 0; i < possibleIndices.size(); ++i) {
        vector<ll> tempElements;
        for (ll j = 0; j < numElements; ++j) {
            if (j == possibleIndices[i]) continue;
            tempElements.push_back(elements[j]);
        }
        
        previousGcd = 0;
        bool validSequence = true;
        for (ll j = 0; j < numElements - 2; ++j) {
            ll currentGcd = gcd(tempElements[j], tempElements[j + 1]);
            if (currentGcd < previousGcd) {
                validSequence = false;
                break;
            }
            previousGcd = currentGcd;
        }
        
        if (validSequence) {
            if(flagg!=1)
            cout << "YES" << endl;
            flagg=1;
        }
    }
    if(flagg==0)
    cout << "NO" << endl;
    }

    return 0;
}
