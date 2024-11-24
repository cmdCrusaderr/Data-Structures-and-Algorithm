#include <iostream>
#include <vector>
using namespace std;

int main() {
    // n -> number of nodes
    // m -> number of edges
    int n, m;
    cout << "Input the number of nodes: ";
    cin >> n;
    cout << "Input the number of edges: ";
    cin >> m;

    // Representation using adjacency list (1-indexed)
    vector<vector<int>> adj(n + 1); // n+1 for 1-indexed graph

    // Input edges
    cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        // Add edges for an undirected graph
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Display the adjacency list
    cout << "Adjacency List:" << endl;
    for (int i = 1; i <= n; i++) { // Iterate from 1 to n (1-indexed)
        cout << i << ": ";
        for (auto neighbor : adj[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    return 0;
}

