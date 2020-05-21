#include <bits/stdc++.h>
using namespace std;
int main () {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int mop[10005];
	int n; cin >> n;
	for (int i = 1; i <= 5; ++i) mop[i] = i;
	for (int i = 6; i <= n; ++i) {
		int m = INT_MAX;
		for (int x = 2; x <= sqrt(i); ++x) {
			int y = i / x;
			int r = i - x * y;
			m = min(m, mop[x] + mop[y] + mop[r]);
		}
		mop[i] = m;
	}
	cout << mop[n] << endl; 
}
