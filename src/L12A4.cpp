#include <bits/stdc++.h>
using namespace std;

int arr[200005];
int stx[200005][20];
int stn[200005][20];

int main () {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, q; cin >> n >> q;
	for (int i = 1; i <= n; ++i) {
		cin >> arr[i];
		stx[i][0] = arr[i];
		stn[i][0] = arr[i];	
	}
	for (int j = 1; j <= floor(log2(n)); ++j) {
		for (int i = 1; i <= n; ++i) {
			stx[i][j] = max(stx[i][j-1], stx[i+(1<<(j-1))][j-1]);
			stn[i][j] = min(stn[i][j-1], (stn[i+(1<<(j-1))][j-1] == 0 ? INT_MAX : stn[i+(1<<(j-1))][j-1]));
		}
	}
//	cout << "max" << endl;
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 0; j <= log2(n); ++j) cout << stx[i][j] << " ";
//		cout << endl;
//	}
//	cout << "min" << endl;
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 0; j <= log2(n); ++j) cout << stn[i][j] << " ";
//		cout << endl;
//	}
	for (int j = 0; j < q; ++j) {
		int a, b; cin >> a >> b;
		int mx, mn, k = floor(log2(b-a+1));
		mx = max(stx[a][k], stx[b-(1<<k)+1][k]);
		mn = min(stn[a][k], stn[b-(1<<k)+1][k]);
//		cout << k << " " << mx << " " << mn << " ";
		cout << mx - mn << endl;
	}
}
