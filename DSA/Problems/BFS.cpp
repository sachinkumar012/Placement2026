#include<bits/stdc++.h>
using namespace std;

// Function to perform BFS
void bfs(int start, vector<vector<int>> &graph, vector<bool> &visited) {
    queue<int> q;               // Create a queue for BFS
    q.push(start);              // Push the starting node into the queue
    visited[start] = true;      // Mark the starting node as visited

    while (!q.empty()) {
        int current = q.front();    // Get the front node
        q.pop();                    // Remove it from the queue

        cout << current << " ";     // Print the current node

        // Go through all the neighbors of the current node
        for (int neighbor : graph[current]) {
            if (!visited[neighbor]) {       // If the neighbor hasn't been visited
                q.push(neighbor);           // Add it to the queue
                visited[neighbor] = true;   // Mark it as visited
            }
        }
    }
}

int main() {
    int nodes = 5; // Number of nodes (0 to 4)

    // Create an adjacency list to represent the graph
    vector<vector<int>> graph(nodes);

    // Add edges (this example is for an undirected graph)
    graph[0].push_back(1);
    graph[0].push_back(2);
    graph[1].push_back(0);
    graph[1].push_back(3);
    graph[2].push_back(0);
    graph[2].push_back(4);
    graph[3].push_back(1);
    graph[4].push_back(2);

    // Create a visited array and initialize all values to false
    vector<bool> visited(nodes, false);

    cout << "BFS traversal starting from node 0:\n";
    bfs(0, graph, visited);

    return 0;
}
