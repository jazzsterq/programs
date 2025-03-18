#include <bits/stdc++.h>
using namespace std;
static string makeKey(const vector<int>& seq) {
    ostringstream oss;
    oss << seq.size();
    for (int x : seq) {
        oss << ',' << x;
    }
    return oss.str();
}
static vector<int> forwardDiff(const vector<int>& seq) {
    int n = (int)seq.size();
    vector<int> diff(n - 1);
    for (int i = 0; i < n - 1; i++) {
        diff[i] = seq[i + 1] - seq[i];
    }
    return diff;
}
static vector<int> backwardDiff(const vector<int>& seq) {
    vector<int> rev = seq;
    reverse(rev.begin(), rev.end());
    return forwardDiff(rev);
}
int bestSum(vector<int>& seq, unordered_map<string, int>& memo) {
    string key = makeKey(seq);
    if (memo.find(key) != memo.end()) {
        return memo[key];
    }
    
    int currentSum = accumulate(seq.begin(), seq.end(), 0);
    int result = currentSum;
    
    if (seq.size() > 1) {

        vector<int> fd = forwardDiff(seq);
        int forwardRes = bestSum(fd, memo);
        result = max(result, forwardRes);
        
        vector<int> bd = backwardDiff(seq);
        int backwardRes = bestSum(bd, memo);
        result = max(result, backwardRes);
    }
    
    memo[key] = result;
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        unordered_map<string, int> memo;
        
        cout << bestSum(arr, memo) << "\n";
    }
    return 0;
}
