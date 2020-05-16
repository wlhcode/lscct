#include <bits/stdc++.h>
using namespace std;
int main () {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int tc; cin >> tc;
	for (int asdiob = 0; asdiob < tc; ++asdiob) {
		int n, m; cin >> n >> m;
		vector <int> edges[n + 5];
		for (int i = 0; i < m; ++i) {
			int s, e; cin >> s >> e;
			edges[s].push_back(e);
			edges[e].push_back(s);
		}
		int odd1 = -1, odd2 = -1;
		bool fail = false;
		for (int i = 1; i <= n; ++i) {
			if (edges[i].size() < 2) {
				fail = true;
				break;
			}
			else if (edges[i].size() % 2 == 1) {
				odd1 = i;
				swap(odd1, odd2);
				fail = !fail;
			}
		}
		if (fail) {
			cout << -1 << endl;
			continue;
		}
		else if (odd1 == -1) {
			cout << 0 << endl;
			continue;
		}
		queue <int> q;
		bool visited[n + 5];
		int cmfrm[n + 5];
		memset(visited, 0, n + 3);
		q.push(odd1);
		visited[odd1] = true;
		while (!q.empty() && !visited[odd2]) {
			int f = q.front();
			q.pop();
			for (int i = 0; i < edges[f].size(); ++i) {
				int j = edges[f].at(i);
				if (!visited[j] && edges[j].size() > 2) {
					q.push(j);
					cmfrm[j] = f;
					visited[j] = true;
				}
				if (j == odd2) break;
			}
		}
		if (!visited[odd2]) {
			cout << -1 << endl;
			continue;
		}
		int ans = 0;
		for (int i = odd2; i != odd1; i = cmfrm[i]) ++ans;
		cout << ans << endl;
	}
}
