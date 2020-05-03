#include <bits/stdc++.h>
using namespace std;
int ham (string a, string b) {
	int diffchar = 0;
	for (int i = 0; i < 7; i++) {
		if (a[i] != b[i]) diffchar++;
	}
	return min(7, diffchar + 1);
}
int main () {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m = 0;
	cin >> n;
	string s[n+3];
	for (int i = 0; i < n; i++) cin >> s[i];
	vector <pair<int, pair<int, int> > > edge;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			int d = ham(s[i], s[j]);
//			cout << "fuck" << endl;
			edge.push_back({d, {i, j}});
			m++;
		}
	}
	// X322 copy code
	
	sort(edge.begin(), edge.end());
	int size = 0, cnt = 0, dsu[n+3];
	for (int i = 0; i < n; ++i) dsu[i] = i;
	for (int i = 0; i < m; ++i) {
		int a = edge[i].second.first;
		int b = edge[i].second.second;
		if (dsu[a] == dsu[b]) continue;
		else {
			int tmp1 = dsu[a], tmp2 = dsu[b];
			for (int j = 0; j < n; ++j) {
				if (dsu[j] == tmp2) dsu[j] = tmp1;
			}
			size += edge[i].first;
			cnt++;
//			if (cnt >= n - 1) break;
		}
	}
//	for (int i = 0; i < n; ++i) cout << dsu[i] << " ";
	if (cnt < n - 1) cout << "NO SOLUTION" << endl;
	else cout << size + 7 << endl;
}