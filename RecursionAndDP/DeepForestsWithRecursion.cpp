/* You will be given an array of 0's and 1's where 1 represent trees and 0 represent land.
 * You have to find the biggest forest possible. Forest is formed by all the adjacent trees
 * Sample testcase
 4 4
 1 1 0 0
 0 1 0 1
 1 1 0 0
 0 0 0 1

 * Here the biggest forest is of size 5 */


#include <iostream>
using namespace std;
int myBigForest = 0;
vector<vector<int> >myArea(10001);
vector<vector<bool> >visited(10001);
int m,n;

int findBigForest(int x, int y)
{
    int forestSize = 0;
    if(x >= m || x < 0 || y >= n || y < 0 || visited[x][y] || !myArea[x][y])
        return 0;
    visited[x][y] = true;
    forestSize = 1+ findBigForest(x+1,y) + findBigForest(x-1, y) + findBigForest(x, y+1) + findBigForest(x, y-1);
    if(forestSize > myBigForest)
        myBigForest = forestSize;
    return forestSize;
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
            if(!visited[i][j] && myArea[i][j] == 1)
                findBigForest(i,j);
        }
    }
    cout<<myBigForest<<endl;
}