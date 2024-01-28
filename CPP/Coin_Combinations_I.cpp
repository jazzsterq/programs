#include <bits/stdc++.h>
using namespace std;

int main() {
  int mod = 1e9+7;
  int n, target;
  cin >> n >> target;
  vector<int> x(n);
  for (int&v : x) cin >> v;

  vector<vector<int> > dp(n+1,vector<int>(target+1,0));
  dp[0][0] = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= target; j++) {
     
      int left = j-x[i-1];
      if (left >= 0) {
	(dp[i][j] += dp[i][j-x[i-1]]) %= mod;
      }
      dp[i][j] += dp[i-1][j];
    }
  }
  for (int j = 0; j <= target; j++){
  for (int i = 0; i <= n; i++) {
     
        cout<<dp[i][j]<<" ";}cout<<endl;}
  cout << dp[n][target] << endl;
}