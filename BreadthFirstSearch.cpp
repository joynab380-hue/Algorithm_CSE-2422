#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() 
{
    int n, edges;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter number of edges: ";
    cin >> edges;

    vector<vector<int>> adj(n);
    cout << "Enter edges (u v): " << endl;
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); 
    }

    int start;
    cout << "Enter starting node: ";
    cin >> start;

    vector<bool> visited(n, false);
    queue<int> q;

    cout << "BFS Traversal: ";

    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int next : adj[node]) {
            if (!visited[next]) {
                visited[next] = true;
                q.push(next);
            }
        }
    }
    cout << endl;
    return 0;
}
