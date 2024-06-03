#include <iostream>
#include <vector>

using namespace std;

// Function to perform DFS traversal
void dfs(int node, vector<int>& visited, vector<vector<int> >& graph) {
    // Mark the current node as visited
    visited[node] = 1;

    // Print the current node
    cout << node << " ";

    // Traverse all the adjacent nodes of the current node
    for (int i = 0; i < graph[node].size(); i++) {
        int adjacentNode = graph[node][i];

        // If the adjacent node is not visited, recursively call dfs on it
        if (!visited[adjacentNode]) {
            dfs(adjacentNode, visited, graph);
        }
    }
}

int main() {
    int n; // Number of nodes
    int m; // Number of edges

    cin >> n >> m;

    vector<vector<int> > graph(n); // Adjacency list representation of the graph

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        // Adding edges to the graph
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<int> visited(n, 0); // Array to keep track of visited nodes


    dfs(0, visited, graph); // Starting DFS traversal from node 0

    return 0;
}