#include <iostream>
#include <vector>
using namespace std;


struct Edge {
    int src, dest;
};

class Graph
{
public:
    // a vector of vectors to represent an adjacency list
    vector<vector<int>> adjList;
 
    // Constructor
    Graph(vector<Edge> const &edges, int N)
    {
        // resize the vector to hold `N` elements of type `vector<int>`
        adjList.resize(N);
 
        // add edges to the undirected graph
        for (Edge edge: edges)
        {
            int src = edge.src;
            int dest = edge.dest;
 
            adjList[src].push_back(dest);
            adjList[dest].push_back(src);
        }
    }
};

void printpath(vector<int> const &path)
{
       for (int i: path) {
        cout << i << ' ';
    }
    cout << endl;

}

void hameltonin(Graph const &g, int v, vector<bool>
                        visited, vector<int> &path, int N)
{
    if(path.size()==N)
    {
        printpath(path);
        return;
    }

    for (auto x: g.adjList(v))
    {
        if(!visited[x])
        {
            visited[x] = true;

            path.push_back(x);

            hameltonin(g, x, visited, path, N);

            visited[x] = false;

            path.pop_back();
        }
    }

}


int main()
{

    vector<Edge> edges = {
        {0, 1}, {0, 2}, {0, 3}, {1, 2}, {1, 3}, {2, 3}
    };
 
    // starting node
    int start = 0;
 
    // total number of nodes in the graph
    int N = 4;
 
    // build a graph from the given edges
    Graph g(edges, N);
 
    // add starting node to the path
    vector<int> path;
    path.push_back(start);
 
    // mark the start node as visited
    vector<bool> visited(N);
    visited[start] = true;
 
    hameltonin(g, start, visited, path, N);
    return 0;
}