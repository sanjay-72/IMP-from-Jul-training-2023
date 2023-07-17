#include<iostream>
#include<queue>
using namespace std;

vector<vector<int> >myArea(10001);
vector<vector<bool> >visited(10001);
queue<pair<int, int> >myQueue;
int m,n;
int myBigForest = 0;

bool isForest(int i, int j)
{
    if(i >= 0 && i < m && j >= 0 && j < n && !visited[i][j] && myArea[i][j])
        return true;
    return false;
}

void bfs(int x, int y)
{
    int temp = 1;
    myQueue.push(make_pair(x, y));
    visited[x][y] = true;
    while(!myQueue.empty())
    {
        int i = myQueue.front().first;
        int j = myQueue.front().second;
        if(isForest(i+1,j))
        {
            myQueue.push(make_pair(i+1,j));
            visited[i+1][j] = true;
            temp++;
        }
        if(isForest(i-1,j))
        {
            myQueue.push(make_pair(i-1,j));
            visited[i-1][j] = true;
            temp++;
        }
        if(isForest(i,j+1))
        {
            myQueue.push(make_pair(i,j+1));
            visited[i][j+1] = true;
            temp++;
        }
        if(isForest(i,j-1))
        {
            myQueue.push(make_pair(i,j-1));
            visited[i][j-1] = true;
            temp++;
        }
        if(temp > myBigForest)
            myBigForest = temp;
        myQueue.pop();
    }

}

int main()
{
    cin>>m>>n;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int temp;
            cin>>temp;
            myArea[i].push_back(temp);
            visited[i].push_back(false);
        }
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(!visited[i][j] && myArea[i][j])
            {
                bfs(i, j);
            }
        }
    }
    cout<<myBigForest;
}