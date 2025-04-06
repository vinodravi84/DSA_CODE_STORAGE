#include <iostream>
#include <vector>
using namespace std;

class Graph {
public:
    int n;  // number of nodes
    vector<vector<int>> adj;

    Graph(int nodes) {
        n = nodes;
        adj.resize(n);
    }

    // Add edge (undirected by default)
    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Print adjacency list
    void printAdjList() {
        for (int i = 0; i < n; ++i) {
            cout << i << " -> ";
            for (int neighbor : adj[i]) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    // Create a graph with 5 nodes
    Graph g(5);

    // Manually add edges
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 4);

    cout << "Adjacency List:\n";
    g.printAdjList();

    return 0;
}
