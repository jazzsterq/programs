#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<ll> b(n);
        for(ll i=0;i<n;i++)b[i]=arr[i];
        ll ans = 0;
        if (n > 2) {
            for (ll i = 0; i <=n; i++) {
                if(i==n)continue;
                if (i + 2 < n && arr[i + 2] <= arr[i] && arr[i + 1] <= arr[i]) {
                    ans = max(ans, max(arr[i + 1], arr[i + 2]));
                }
                if (i - 2 >= 0 && arr[i - 2] >= arr[i] && arr[i - 1] >= arr[i]) {
                    ans = max(ans, min(arr[i - 1], arr[i - 2]));
                }
                if (i - 1 >= 0 && arr[i] - arr[i - 1] >= 0 && i + 1 < n && arr[i + 1] - arr[i] >= 0) {
                    ans = max(ans, arr[i]);
                }
                if (i - 2 >= 0 && ((arr[i] >= arr[i - 1] && arr[i] <= arr[i - 2]) || (arr[i] <= arr[i - 1] && arr[i] >= arr[i - 2]))) {
                    ans = max(ans, arr[i]);
                }
                if (i + 2 < n && arr[i + 2] >= arr[i] && arr[i + 1] >= arr[i]) {
                    ans = max(ans, min(arr[i + 1], arr[i + 2]));
                }
                if (i - 1 >= 0 && i + 1 < n && arr[i] - arr[i - 1] <= 0 && arr[i + 1] - arr[i] <= 0) {
                    ans = max(ans, arr[i]);
                }
                if (i + 2 < n && ((arr[i] >= arr[i + 1] && arr[i] <= arr[i + 2]) || (arr[i] <= arr[i + 1] && arr[i] >= arr[i + 2]))) {
                    ans = max(ans, arr[i]);
                }
                if (i - 2 >= 0 && arr[i - 2] <= arr[i] && arr[i - 1] <= arr[i]) {
                    ans = max(ans, max(arr[i - 1], arr[i - 2]));
                }
            }
        } else {
            ans = min(arr[0], arr[n - 1]);
        }
        cout << ans << endl;
    }

    return 0;
}
