#include<iostream>
#include<vector>
using namespace std;

int main()
{
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
    for(int i = 0;i<V;i++)
    {
        cout<<i<<" => ";
        for(int j = 0;j<adj[i].size();j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}