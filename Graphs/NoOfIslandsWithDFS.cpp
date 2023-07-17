#include<iostream>
#include<vector>
using namespace std;
int area[10001][10001];
bool visited[10001][10001];
int m, n;

void dfs(int x, int y)
{
    if(x < 0 || x >= m || y < 0 || y >= n || visited[x][y] || !area[x][y])
        return;
    visited[x][y] = true;
    dfs(x+1, y);
    dfs(x-1, y);
    dfs(x, y-1);
    dfs(x, y+1);
}

int main()
{
    int count = 0;
    cin>>m>>n;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>area[i][j];
            visited[i][j] = false;
        }
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(area[i][j] && !visited[i][j])
            {
                dfs(i,j);
                count++;
            }
        }
    }
    cout<<count;
}