#include "bits/stdc++.h"
using namespace std;
int n, m;
vector<int> adj[1000005];
bool vis[1000005];

void dfs (int x) {
    vis[x] = 1;
    for (int i = 0; i < adj[x].size(); ++i) {
        int v = adj[x][i];
        if (vis[v]) continue;
        dfs(v);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= m; ++i) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        if (!vis[i]) {
            cnt ++;
            dfs(i);
        }
    }
    cout << cnt << endl;
    return 0;
}
