/* The problem is we want to buy a land of maximum area. we are given all the house numbers and their positions
 * We have to find the maximum location between two houses and give the houses that are side by side for that location.
 * Inputs
 * No.of houses and val(it is always 2 representing we are giving two parameters per house i.e house number and location)
 * Housenumber Location
 Sample case
5 2
3 7
1 9
2 0
5 15
4 30

 Sample output
4 5
 */

#include<iostream>
#include<utility>
#include<vector>

using namespace std;
bool cmp(pair<int, int>a, pair<int, int>b)
{
    if(a.second < b.second)
        return true;
    return false;
}
int main()
{
    int m,n;
    int maxDiff = -1;
    int h1,h2;
    cin>>m>>n;
    vector<pair<int, int> >data;
    //first is position and second is house number
    for(int i = 0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        data.push_back(make_pair(x,y));
    }
    sort(data.begin(),data.end(),cmp);
    for(int i = 0;i<m-1;i++)
    {
        if(data[i+1].second-data[i].second > maxDiff)
        {
            maxDiff = data[i+1].second-data[i].second;
            h1 = data[i].first;
            h2 = data[i+1].first;
        }
    }
    if(h1>h2) swap(h1,h2);
    cout<<"Best locations is between "<<h1<<" and "<<h2;
}