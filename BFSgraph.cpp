#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
queue<int> myQueue;
int V, E;

void bfs(vector<int> adj[V], bool visited[], int startNode)
{
    myQueue.push(startNode);
    visited[startNode] = true;
    while(!myQueue.empty())
    {
        cout<<myQueue.front()<<" ";
        for(int i = 0;i<adj[myQueue.front()].size();i++)
        {
            if(!visited[adj[myQueue.front()][i]])
                myQueue.push(adj[myQueue.front()][i]);
            visited[adj[myQueue.front()][i]] = true;
        }
        myQueue.pop();
    }
    cout<<endl;
}
int main()
{
    cin>>V>>E;
    vector<int> adj[V];
    bool visited[V];
    for(int i = 0;i<V;i++)
        visited[i] = false;
    for(int i = 0;i<E;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cout<<"Enter start node : ";
    int startNode;
    cin>>startNode;

    bfs(adj,visited,startNode);
    for(int i = 0;i<V;i++)
    {
        if(!visited[i])
            bfs(adj, visited, i);
    }
}