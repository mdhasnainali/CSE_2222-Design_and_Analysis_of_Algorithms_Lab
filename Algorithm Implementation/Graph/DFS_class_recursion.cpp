#include <bits/stdc++.h>
using namespace std;

// Necessary for DFS: visited node marking
const int MX = 100;

vector<int> adjList[MX];
vector<bool> visited(MX, true);

void setUpForDFS();
void addEdge(int u, int v);
void DFS(int node);

int main() {
    setUpForDFS();

    for (auto i : visited) cout << i << " ";

    cout << endl;
}

void setUpForDFS() {
    for (auto i = 0; i < MX; i++) {
        adjList[i].clear();
        visited[i] = false;
    }
}

void addEdge(int u, int v) {
    adjList[u].push_back(v);
    // adjList[v].push_back(u);  // undirected graph
}

void DFS(int node) {
    if (visited[node]) return;
    visited[node] = true;
    for (auto i : adjList[node]) {
        DFS(i);
    }
}