#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

int islands = 0,m,n;
queue<pair<int,int> > myQueue;

vector<int> adj[10001];             //  Taking max possible
vector<bool> visited[10001];        //  Taking max possible

int Ax[] = {0, 1, 0, -1};       // For seeing in all 4 directions of X
int Ay[] = {1, 0, -1, 0};       // For seeing in all 4 directions of y

bool isSafe(int x, int y)
{
    if(x < m && x >= 0 && y < n && y >= 0 && adj[x][y] == 1 && !visited[x][y])
        return true;
    return false;
}

void bfs(int startX, int startY)
{
    myQueue.push(make_pair(startX,startY));
    visited[startX][startY] = true;

    while(!myQueue.empty())
    {
        int x = myQueue.front().first;
        int y = myQueue.front().second;
        for(int i = 0;i<4;i++)
        {
            if(isSafe(x+Ax[i],y+Ay[i]))
            {
                myQueue.push(make_pair((x+Ax[i]), (y+Ay[i])));
                visited[(x+Ax[i])][(y+Ay[i])] = true;
            }
        }
        myQueue.pop();
    }
}

int main()
{
    cin>>m>>n;

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
                bfs(i,j);
                islands++;
            }
        }
    }
    cout<<"Total Islands found : "<<islands;
}