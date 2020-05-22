#include <bits/stdc++.h>
using namespace std;
int main () {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int arr[n+3][n+3], dp[n+3][n+3];
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) cin >> arr[i][j];
		dp[i][1] = 1; dp[1][i] = 1;
	}
	int m = 1;
	for (int i = 2; i <= n; ++i) {
		for (int j = 2; j <= n; ++j) {
			int top = arr[i-1][j], left = arr[i][j-1];
			int top_dp = dp[i-1][j], left_dp = dp[i][j-1];
			if (arr[i][j] != top || arr[i][j] != left) dp[i][j] = 1;
			else if (top_dp == left_dp) {
				if (arr[i-top_dp][j-top_dp] == top) {
					dp[i][j] = top_dp + 1;
					m = max(m, dp[i][j]);
				}
				else dp[i][j] = top_dp;
			}
			else {
				dp[i][j] = min(top_dp, left_dp) + 1;
				m = max(m, dp[i][j]);
			}
		}
	}
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= n; ++j) cout << dp[i][j] << " ";
//		cout << endl;
//	}
	cout << m * m << endl;
}
