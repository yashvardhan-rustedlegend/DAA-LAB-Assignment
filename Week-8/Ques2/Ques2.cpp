#include<bits/stdc++.h>
using namespace std;
struct node
{
    int u,v,wt;
    node(int first,int second, int weight)
    {
        u=first;
        v=second;
        wt=weight;
    }
};
bool cmp(node a,node b)
{
    return (a.wt<b.wt);
}
int findpar(int u,vector<int>&parent)
{
    if(u==parent[u])
    {
        return u;
    }
    return findpar(parent[u],parent);
}
void unionoperation(int u,int v,vector<int>&parent,vector<int>&rank)
{
    u=findpar(u,parent);
    v=findpar(v,parent);
    if(rank[u]<rank[v])
    {
        parent[u]=v;
    }
    else if(rank[v]<rank[u])
    {
        parent[v]=u;
    }
    else
    {
        parent[v]=u;
        rank[u]++;
    }
}
int main()
{
    int vertex,ed;
    cin>>vertex>>ed;

    vector <node> edges;

    for(int i=0;i<ed;i++)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        edges.push_back(node(u,v,wt));
    }
    
    sort(edges.begin(),edges.end(),cmp);
    
    vector <int> parent(vertex);
    
    for(int i=0;i<vertex;i++)
    {
        parent[i]=i;
    }

    vector <int> rank(vertex,0);
    int cost=0;

    vector <pair <int,int>> mst;

    for(auto i:edges)
    {
        if(findpar(i.u,parent)!=findpar(i.v,parent))
        {
            cost+=i.wt;
            mst.push_back(make_pair(i.u,i.v));
            unionoperation(i.u,i.v,parent,rank);
        }
    }
    cout<<"Minimum Spanning Weight: "<<cost<<endl;

    return 0;
}