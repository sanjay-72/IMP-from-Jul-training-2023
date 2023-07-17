#include<iostream>
#include<queue>
using namespace std;

int m, n;
vector<vector<int> > Area(10001);
vector<vector<bool> > visited(10001);
queue<pair<int, int> > myQueue;

int aX[] = {0, 0, 1, -1, 1, -1, -1, 1};
int aY[] = {-1, 1, 0, 0, 1, -1, 1, -1};

bool isOk(int x, int y)
{
    if(x >= 0 && x < m && y >= 0 && y < n && !visited[x][y] && Area[x][y])
        return true;
    return false;
}

void bfs(int i, int j)
{
    if(i < 0 || i >= m || j < 0 || j >= n || visited[i][j] || !Area[i][j])
        return;
    myQueue.push(make_pair(i, j));
    visited[i][j] = true;

    while(!myQueue.empty())
    {
        int x = myQueue.front().first;
        int y = myQueue.front().second;
        visited[x][y] = true;
        for(int p = 0; p < 8; p++)
        {
            int myX = x+aX[p];
            int myY = y+aY[p];
            if(isOk(myX,myY))
            {
                myQueue.push(make_pair(myX, myY));
                visited[myX][myY] = true;
            }
        }
        myQueue.pop();
    }
}

int main()
{
    int Islands = 0;
    cin>>m>>n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin>>temp;
            Area[i].push_back(temp);
            visited[i].push_back(false);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(Area[i][j] && !visited[i][j])
            {
                bfs(i, j);
                Islands++;
            }
        }
    }
    cout<<Islands;
}