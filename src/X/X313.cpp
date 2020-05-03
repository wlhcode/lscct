#include "bits/stdc++.h"
using namespace std;
int n, m;
vector<int> adj[1000005];
int dist[1000005];
int p[1000005];

void bfs (int x, int y) {
    queue<int> q;
    q.push(x);
    memset(dist, -1, sizeof dist);
    dist[x] = 1; p[x] = -1;
    while(!q.empty()) {
        int f = q.front(); q.pop();
        for (int i = 0; i < adj[f].size(); ++i) {
            int v = adj[f][i];
            if (dist[v] != -1) continue;
            dist[v] = dist[f] + 1;
            p[v] = f;
            q.push(v);
        }
    }
    if (dist[y] == -1) cout << "No route." << endl;
    else {
        cout << dist[y] << endl;
        vector<int> v;
        v.push_back(y);
        while (p[y] != -1) {
            v.push_back(p[y]);
            y = p[y];
        }
        reverse(v.begin(), v.end());
        for (int i = 0; i < v.size(); ++i)
            cout << v[i] << (i + 1 == v.size() ? '\n' : ' ');
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= m; ++i) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
    }
    int x, y; cin >> x >> y;
    bfs(x, y);
    return 0;
}
