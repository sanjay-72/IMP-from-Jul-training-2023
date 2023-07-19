// This code is using DFS concept and can be used to detect the cycles inside a graph.

#include<iostream>
#include<vector>
using namespace std;
int V, E;
vector<int> adj[10001];
vector<bool> visited(10001, false);
bool cycleExists = false;

void detectCycles(int node, int parent)
{
    visited[node] = true;
    for(int i = 0; i < adj[node].size(); i++)
    {
        if (!visited[adj[node][i]])
        {
            detectCycles(adj[node][i], node);
        }
        else if (visited[adj[node][i]] && adj[node][i] != parent)
            cycleExists = true;

    }
}

int main()
{
    cin>>V>>E;
    for(int i = 0; i < E; i++)
    {
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    detectCycles(0, -1);
    if(cycleExists)
        cout<<"Yes, cycle exists in graph.";
    else
        cout<<"No, cycle does not exists in graph.";
}

