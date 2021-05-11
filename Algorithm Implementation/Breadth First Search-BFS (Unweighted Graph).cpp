#include <bits/stdc++.h>
using namespace std;


#define PII pair<int,int>

int mx = 10000;
long long nodes, edges;
bool visited[10000];
int level[10000];
vector <PII> graph[10000];



void BFS(int source)
{
	queue <int> Q;
	memset(level, -1 , sizeof(level));
	memset(visited, false , sizeof(level));
	Q.push(source);
	level[source] = 0;
	visited[source] = true;

	while (!Q.empty()) {
		int u = Q.front();
		Q.pop();
		for (int i = 0; i < graph[u].size(); i++) {
			if (visited[graph[u][i].second] == false) {
				visited[graph[u][i].second] = true;
				level[graph[u][i].second] = level[u] + 1;
				Q.push(graph[u][i].second);
			}
		}
	}
}

int main()
{
	freopen("Test-1-input.txt", "r", stdin);
	freopen("Test-1-output.txt", "w", stdout);

	cin >> nodes >> edges;
	int a, b, w;

	for (int i = 0; i < edges; i++) {
		cin >> a >> b >> w;
		graph[a].push_back(make_pair(w, b));
		graph[b].push_back(make_pair(w, a));
	}

	BFS(3);

	for (int i = 1; i <= nodes; i++) {
		cout << i << " " << level[i] << endl;
	}

	return 0;
}
