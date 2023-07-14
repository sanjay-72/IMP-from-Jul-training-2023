#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    queue<int> myQueue;
    vector<int> visited;
    int V, E;
    cin>>V>>E;
    vector<int> adj[V];
    for(int i = 0;i<E;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    myQueue.push(0);
    visited.push_back(0);
    while(!myQueue.empty())
    {
        cout<<myQueue.front()<<" ";
        for(int i = 0;i<adj[myQueue.front()].size();i++)
        {
            if(find(visited.begin(),visited.end(),adj[myQueue.front()][i]) == visited.end())
            myQueue.push(adj[myQueue.front()][i]);
            visited.push_back(adj[myQueue.front()][i]);
        }
        myQueue.pop();

    }

}