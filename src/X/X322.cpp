#include <bits/stdc++.h>
using namespace std;
int main () {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	vector <pair<int, pair<int, int> > > edge;
	for (int i = 0; i < m; ++i) {
		int a, b, c;
		cin >> a >> b >> c;
		edge.push_back({c, {a-1, b-1}});
	}
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
	else cout << size << endl;
}