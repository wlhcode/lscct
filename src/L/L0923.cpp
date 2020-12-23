#include <bits/stdc++.h>
using namespace std;
int main () {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, tmp = -1; cin >> n;
	vector <int> v;
	for (int i = 0; i < n; ++i) {
		int t; cin >> t;
		if (t != tmp) v.push_back(t);
		tmp = t;
	}
	n = v.size();
	int q; cin >> q;
	for (int z = 0; z < q; ++z) {
		int h; cin >> h;
		int l = 0, r = n - 1;
		while (l < r) {
			if (v[(l+r)/2] > h) r = (l+r)/2 - 1;
			else if (v[(l+r)/2] < h) l = (l+r)/2 + 1;
			else break;
		}
		int k = (l + r) / 2;
		if (v[k] < h) {
			cout << v[k] << " ";
			if (k+1 >= n) cout << "X" << endl;
			else cout << v[k+1] << endl;
		}
		else if (v[k] == h) {
			if (k-1 < 0) cout << "X ";
			else cout << v[k-1] << " ";
			if (k+1 >= n) cout << "X" << endl;
			else cout << v[k+1] << endl;
		}
		else {
			if (k-1 < 0) cout << "X ";
			else cout << v[k-1] << " ";
			cout << v[k] << endl;
		}
	}
}
