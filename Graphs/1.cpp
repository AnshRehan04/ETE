#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(vector<vector<int>> &graph, int start) {
    int n = graph.size();
    vector<bool> visited(n, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int neighbour : graph[node]) {
            if (!visited[neighbour]) {
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter number of vertices: ";
    cin >> n;

    int m;
    cout << "Enter number of edges: ";
    cin >> m;

    vector<vector<int>> graph(n);
    cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int start;
    cout << "Enter the starting index: ";
    cin >> start;

    cout << "BFS traversal starting from node " << start << ": ";
    bfs(graph, start);
    return 0;
}
