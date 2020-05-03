#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, start, endpt;
	cin >> n >> start >> endpt;
	vector <pair<int, int> > v[n+3];
	while (true) {
		int a, b, l;
		cin >> a >> b >> l;
		if(l == 0) break;
		v[a].push_back({b, l});
		v[b].push_back({a, l});
	}
	priority_queue <pair<int, pair<int, int> > > pq;
	pq.push({0, {start, -1}});
	int from[n+3];
	bool visited[n+3];
	memset(from, 0, n+1);
	memset(visited, 0, n+1);
	while (!pq.empty()) {
		auto f = pq.top();
		int d = -f.first;
		int cur = f.second.first;
		int comefrom = f.second.second;
		if (cur == endpt) {
			from[cur] = comefrom;
			cout << d << endl;
			deque <int> dq;
			do {
				dq.push_front(cur);
				cur = from[cur];
			} while (cur != start);
			cout << start;
			for (int x : dq) cout << " " << x;
			cout << endl;
			return 0;
		}
		pq.pop();
		if (visited[cur]) continue;
		from[cur] = comefrom;
		visited[cur] = true;
		for (pair<int, int> q : v[cur]) {
			pq.push({-d - q.second, {q.first, cur}});
		}
	}
}