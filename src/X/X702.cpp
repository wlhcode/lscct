#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dp[1005][1005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string a; cin >> a;
	string b; cin >> b;
	int n = a.length(), m = b.length();
	a = "#" + a;
	b = "#" + b;
	dp[0][0] = 0;
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= m; ++j){
			dp[i][j] = (a[i] == b[j] ? dp[i-1][j-1]+1 : max(dp[i-1][j], dp[i][j-1]));
		}
	}
	cout << dp[n][m] << endl;
}

