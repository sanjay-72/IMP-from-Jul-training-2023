#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
int islands = 0,m,n;
queue<pair<int,int> > myQueue;

void bfs(vector<int>adj[], vector<bool>visited[], int startX, int startY)
{

    myQueue.push(make_pair(startX,startY));
    visited[startX][startY] = true;

    while(!myQueue.empty())
    {
        int x = myQueue.front().first;
        int y = myQueue.front().second;
        if(x + 1 < m)
            if(adj[x+1][y] == 1 && !visited[x + 1][y])
            {
                myQueue.push(make_pair((x+1), y));
                visited[x + 1][y] = true;
            }
        if(x - 1 > -1)
            if(adj[x-1][y] == 1 && !visited[x-1][y])
            {
                myQueue.push(make_pair((x-1),y));
                visited[x-1][y] = true;
            }
        if(y + 1 < n)
            if(adj[x][y+1] == 1 && !visited[x][y+1])
            {
                myQueue.push(make_pair(x,(y+1)));
                visited[x][y+1] = true;
            }
        if(y - 1 > -1)
            if(adj[x][y-1] == 1 && !visited[x][y-1])
            {
                myQueue.push(make_pair(x,(y-1)));
                visited[x][y-1] = true;
            }
        myQueue.pop();
    }
}

int main()
{
    cin>>m>>n;
    vector<int> adj[m];
    vector<bool> visited[m];
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            int x;
            cin>>x;
            adj[i].push_back(x);
            visited[i].push_back(false);
        }
    }

    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(!visited[i][j] && adj[i][j])
            {
                bfs(adj,visited,i,j);
                islands++;
            }
        }
    }
    cout<<"Total Islands found : "<<islands;
}