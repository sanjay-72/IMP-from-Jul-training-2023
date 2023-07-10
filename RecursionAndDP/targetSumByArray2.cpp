#include<iostream>
using namespace std;
int n;
int dp[1001][1001];
bool findTargets(int x, int i, int arr[])
{

    if(x<0)
        return false;

    if(dp[x][i] != -1)
        return dp[x][i];

    if(i >= n) {
        if(x==0)
            return true;
        return false;
    }
    bool l = findTargets(x-arr[i],i+1,arr);
    bool r = findTargets(x, i+1, arr);
    return dp[x][i] = l || r;
}

int main()
{
    for(int i = 0;i<1001;i++)
        for(int j = 0;j<1001;j++)
            dp[i][j] = -1;
    int target;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
        cin>>arr[i];
    cin>>target;
    if(findTargets(target, 0, arr))
    {
        cout<<"Possible.";
    }
    else
    {
        cout<<"Not Possible.";
    }
}