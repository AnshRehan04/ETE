#include <iostream>
#include <vector>
using namespace std;
void dfs(int node,vector<int> &visited,vector<vector<int>> &graph){

    visited[node]=1;

    cout<<node<<" ";

    for(int i=0;i<graph[node].size();i++){
        int adjnode=graph[node][i];

        if(!visited[adjnode]){
            dfs(adjnode,visited,graph);
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> graph(n);

    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int start;
    cin>>start;
    
    vector<int> visited(n,0);
    dfs(0,visited,graph);
    
}