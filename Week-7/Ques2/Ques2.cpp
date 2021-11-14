#include <bits/stdc++.h>
using namespace std;

void BellmanFord(int graph[][3], int V, int E, int src)
{
	int dis[5];
	for (int i = 0; i < V; i++)
		dis[i] = INT_MAX;

	dis[src] = 0;

	for (int i = 0; i < V - 1; i++) 
	{
		for (int j = 0; j < E; j++) 
		{
			if (dis[graph[j][0]] != INT_MAX && dis[graph[j][0]] + graph[j][2] <	dis[graph[j][1]])
				dis[graph[j][1]] = dis[graph[j][0]] + graph[j][2];
		}
	}
	for (int i = 0; i < E; i++) 
	{
		int x = graph[i][0];
		int y = graph[i][1];
		int weight = graph[i][2];
		if (dis[x] != INT_MAX && dis[x] + weight < dis[y])
			cout << "Graph contains negative cycle! " << endl;
	}

	for (int i = 0; i < V; i++)
		cout << i+1 <<": "<< dis[i] << endl;
}

int main()
{
	int V = 5; 
	int E = 6; 
	int graph[][3] = { { 0, 1, 4 }, { 0, 2, 1 },
					   { 1, 4, 4 }, { 2, 1, 2 },
					   { 2, 3, 4 }, { 3, 4, 4 }};

	BellmanFord(graph, V, E, 0);
	return 0;
}