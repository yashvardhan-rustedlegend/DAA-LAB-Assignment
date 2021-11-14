#include <bits/stdc++.h>
using namespace std;

#define V 4

int shortestPath(int graph[][V], int u, int v, int k)
{

if (k == 0 && u == v)			      return 0;
if (k == 1 && graph[u][v] != INT_MAX) return graph[u][v];
if (k <= 0)					          return INT_MAX;


int res = INT_MAX;

for (int i = 0; i < V; i++)
{
	if (graph[u][i] != INT_MAX && u != i && v != i)
	{
		int rec_res = shortestPath(graph, i, v, k-1);
		if (rec_res != INT_MAX)
			res = min(res, graph[u][i] + rec_res);
	}
}
return res;
}


int main()
{
     /*int graph[V][V] = { {0, 10, 3, 2},
                         {0, 0, 0, 7},
                         {0, 0, 0, 6},
                         {0, 0, 0, 0} };*/
	
	int graph[V][V];

	for(int i=0;i<V;i++)
	{
		for(int j=0;j<V;j++)
		{
			cin>>graph[i][j];
		}
	}

    int u,v,k;            
    cin>>u>>v;
    cin>>k;
	cout << "Weight of the shortest path from (" <<u<<","<<v<<") with "<<k<<" edges: "<<
		shortestPath(graph, u-1, v-1, k)<<endl;
	return 0;
}
