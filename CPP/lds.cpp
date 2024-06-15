#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector<int> primes, lpf(n+1);
    for(int i = 2; i <= n; i += 2) {
        lpf[i] = 2;
    }
    for(int i = 3; i <= n; i += 2) {
        if (lpf[i] != 0) continue;
        if (i > k) primes.push_back(i);
        for (int j = i; j <= n; j += i) {
            lpf[j] = i;
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        cout<<lpf[i]<<" ";
    }
    return 0;
}
