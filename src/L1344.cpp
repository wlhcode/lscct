#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, e;
	cin >> n >> e;
	vector <int> v[n+5];
	for (int i = 0; i < e; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	bool visited[n+5];
	int dist[n+5];
	memset(visited, 0, n+2);
	queue <int> q;
	int d = 0;
	q.push(1);
	visited[1] = true;
	dist[1] = 0;
	while(!visited[n]) {
		for (int x : v[q.front()]) {
			if(!visited[x]) {
				q.push(x);
				visited[x] = true;
				dist[x] = dist[q.front()] + 1;
			}
		}
		q.pop();
	}
	d += dist[n] * 5;
	while(!q.empty()) q.pop();
	memset(visited, 0, n+2);
	q.push(n);
	visited[n] = true;
	dist[n] = 0;
	while(!visited[2]) {
		for (int x : v[q.front()]) {
			if(!visited[x]) {
				q.push(x);
				visited[x] = true;
				dist[x] = dist[q.front()] + 1;
			}  
		}
		q.pop();
	}
	d += dist[2] * 5;
	cout << d << endl;
}