#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull arr[50005];
ull st[50005][20];
const ull INF = 1000000007;
int main () {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n; cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> arr[i];
		st[i][0] = arr[i];
	}
	for (int j = 1; j <= log2(n); ++j) {
		for (int i = 1; i <= n - (1 << j) + 1; ++i) {
			st[i][j] = st[i][j - 1] * st[i + (1 << (j - 1))][j - 1] % INF;
//			cout << st[i][j] << " ";
		}
//		cout << endl;
	}
	int q; cin >> q;
	for (int j = 0; j < q; ++j) {
		int a, b; cin >> a >> b;
		ull p = 1;
		while (a <= b && p != 0) {
			int l = floor(log2(b - a + 1));
			p = p * st[a][l] % INF;
			a += 1 << l;
		}
		cout << p << endl;
	}
}
