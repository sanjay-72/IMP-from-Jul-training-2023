#include <iostream>
using namespace std;

int m,n;
vector<int> adj[10001];
vector<bool> visited[10001];

void markupIsland(int x, int y)
{
    if(x >= m || x < 0 || y >= n || y < 0 || visited[x][y] || !adj[x][y])
        return;

    visited[x][y] = true;
    markupIsland(x+1,y);
    markupIsland(x-1,y);
    markupIsland(x,y+1);
    markupIsland(x,y-1);

}

int main()
{
    int count = 0;
    cin>>m>>n;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int temp;
            cin>>temp;
            adj[i].push_back(temp);
            visited[i].push_back(false);
        }
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(adj [i][j] == 1 && !visited [i][j])
            {
                markupIsland(i, j);
                count++;
            }
        }
    }
    cout<<count;
}