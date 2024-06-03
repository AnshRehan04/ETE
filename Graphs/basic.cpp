#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void bfs(vector<vector<int>>& adj, int start, int n) {
    queue<int> q;
    vector<int> visited(n + 1, 0);  // Ensure this vector is large enough

    cout << start << " ";
    visited[start] = 1;
    q.push(start);

    while (!q.empty()) {
        int i = q.front();
        q.pop();
        for (int j = 1; j <= n; j++) {
            if (adj[i][j] == 1 && visited[j] == 0) {
                cout << j << " ";
                visited[j] = 1;
                q.push(j);
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    // Initialize an (n+1) x (n+1) adjacency matrix with 0s
    vector<vector<int>> adj(n + 1, vector<int>(n + 1, 0));

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    int start;
    cin >> start;  // Take the starting node as input
    bfs(adj, start, n);

    return 0;
}
