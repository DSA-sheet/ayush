#include <bits/stdc++.h>
#include <list>
using namespace std;

class Graph {
    int V; // No. of vertices
 
    // Pointer to an array containing adjacency lists
    list<int>* adj;
 
    // A function used by DFS
    void DFSUtil(int v, bool visited[]);
 
public:
    Graph(int V); // Constructor
    ~Graph();
    void addEdge(int v, int w);
    void connectedComponents();
};

//--------------------------------------------------------------------------------------------------

void Graph::connectedComponents()
{
     bool* visited = new bool[V];
     for (int v = 0; v < V; v++)
        visited[v] = false;

    vector<vector<int>>res;

    for(int i=0;i<V;i++)
    {
        if(!visited[i])
        {
            vector<int>comp;
            dfsutil(comp,visited,i);
            res.push_back(comop);
        }

    }


}

void Graph::dfsutil(vector<int>comp,bool& visited[],int node)
{
    // Mark the current node as visited and print it
    visited[node] = true;
    comp.push_back(node);

    for(x:adj[node])
    {
        if(!visited[x])
        {
            dfsutil(comp,visited,x);
        }
    }


}










// ------------------------------------------------------------------------------------------------

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
Graph::~Graph() { delete[] adj; }
 
// method to add an undirected edge
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}
 
// Driver code
int main()
{
    // Create a graph given in the above diagram
    Graph g(5); // 5 vertices numbered from 0 to 4
    g.addEdge(1, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
 
    cout << "Following are connected components \n";
    g.connectedComponents();
 
    return 