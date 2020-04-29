#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, r1, r2;
	cin >> n >> r1 >> r2;
	vector <int> v[n+3];
	for (int i = 1; i <= n; i++) {
		int a;
		if (i == r1) continue;
		cin >> a;
		v[a].push_back(i);
		v[i].push_back(a);
	}
	int last[n+3];
	bool visited[n+3];
	memset(visited, 0, n+1);
	queue <int> q;
	q.push(r2);
	while (!q.empty()) {
		for (int x : v[q.front()]) {
			if (visited[x]) continue;
			q.push(x);
			visited[x] = true;
			last[x] = q.front();
		}
		q.pop();
	}
	if (r2 == 1) cout << last[2];
	else cout << last[1]; 
	for (int i = 2; i <= n; i++) {
		if (i == r2 || r2 == 1) continue;
		cout << " " << last[i];
	}
	cout << endl;
}