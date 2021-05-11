#include <bits/stdc++.h>
using namespace std;

int mx = 10000;
long long nodes, edges;
int rep[10000];
pair<int, pair<int, int>> graph[10000];


int find(int n)
{
	if (rep[n] == n) return n;
	return rep[n] = find(rep[n]);
}

bool Union(int a, int b)
{
	int c = find(a);
	int d = find(b);
	if (c != d) {
		rep[c] = d;
		return true;
	}
	return false;
}

int kruskal()
{
	int minimumCost = 0;
	int x, y, w;

	for (int i = 0; i < edges; i++) {
		x = graph[i].second.first;
		y = graph[i].second.second;
		w = graph[i].first;

		if (Union(x, y)) {
			minimumCost += w;
		}
	}

	return minimumCost;
}

int main()
{
	freopen("Test-1-input.txt", "r", stdin);
	freopen("Test-1-output.txt", "w", stdout);

	cin >> nodes >> edges;
	int a, b, w;

	for (int i = 0; i < edges; i++) {
		cin >> a >> b >> w;
		graph[i] = {w, {a, b}};
	}

	for (int i = 0; i <= nodes; i++) {
		rep[i] = i;
	}

	sort(graph, graph + edges);

	int minimumCost = kruskal();

	cout << minimumCost << endl;
}
