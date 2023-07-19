#include<iostream>
#include<vector>
using namespace std;
vector<int> v1[10001];
int flag=0;
void dfs(int currnode,vector<bool>&visited,vector<bool>&res)
{
    visited[currnode]=true;
    res[currnode]=true;
    //cout<<currnode<<" ";
    for(int j=0;j<v1[currnode].size();j++)
    {
        if(visited[j]==false)
            dfs(v1[currnode][j],visited,res);
        else if(res[j]==true) flag=1;
    }
    res[currnode]=false;
    //flag=0;
}
int main()
{
    int V,E,currnode;
    cout<<"enter V and E: ";
    cin>>V>>E;
    cout<<endl;
    while(E--)
    {
        int x,y;
        cout<<"enter x and y: ";
        cin>>x>>y;
        v1[x].push_back(y);
        //v1[y].push_back(x);
    }
    //vector<bool>res[1001];
    vector<bool>res(V+1,false);
    vector<bool>visited(V+1,false);
    dfs(0,visited,res);
    if(flag==1) cout<<"cycle";
    else cout<<"No cycle";

}