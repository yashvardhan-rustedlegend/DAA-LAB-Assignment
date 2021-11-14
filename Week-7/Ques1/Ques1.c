#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

# define V 5

int minDistance(int dist[],bool sptSet[]) {
	int min = INT_MAX, min_index;
	for (int v = 0; v < V; v++)
		if (sptSet[v] == false && dist[v] <= min)
			min = dist[v], min_index = v;
	return min_index;
}

void printPath(int parent[], int j) {
	if (parent[j] == - 1)
		return;
	printPath(parent, parent[j]);
	printf("%d ", j+1);
}

int printSolution(int dist[], int parent[], int src) 
{
	printf("\n %d: %d ", 0, src+1);
	for (int i = 1; i < V; i++)
	{
		printf("\n %d: %d ",dist[i], src+1);
		printPath(parent, i);
	}
}

void dijkstra(int graph[][V], int src) {
	int dist[V];
	bool sptSet[V];
	int parent[V];
	for (int i = 0; i < V; i++)
	{
		parent[0] = -1;
		dist[i] = INT_MAX;
		sptSet[i] = false;
	}
	dist[src] = 0;
	for (int count = 0; count < V - 1; count++) {
		int u = minDistance(dist, sptSet);
		sptSet[u] = true;
		for (int v = 0; v < V; v++)
			if (!sptSet[v] && graph[u][v] &&
				dist[u] + graph[u][v] < dist[v]) {
				parent[v] = u;
				dist[v] = dist[u] + graph[u][v];
			}
	}
	printSolution(dist, parent, src);
}

int main() {
    int src;
    
    int graph[V][V];
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            scanf("%d",&graph[i][j]);
        }
    }
    scanf("%d",&src);
	dijkstra(graph, src-1);
	return 0;
}