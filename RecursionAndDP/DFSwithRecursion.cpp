#include<iostream>
using namespace std;
vector<int>adj[10001];
void dfs(int currentNode, vector<bool> &visited)
{
    visited[currentNode] = true;
    cout<<currentNode<<" ";
    for(int i = 0;i<adj[currentNode].size();i++)
    {
        if(!visited[adj[currentNode][i]])
            dfs(adj[currentNode][i], visited);
    }
}

int main()
{
    int V,E;
    cin>>V>>E;
    vector<bool>visited(V+1,false);
    for(int i = 0; i < E; i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1,visited);
}