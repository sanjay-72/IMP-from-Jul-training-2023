#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
bool cmp(pair<double, int> a, pair<double, int> b)
{
    if( a.first > b.first)
        return true;
    return false;
}
int main()
{
    vector<pair< double, int> >v;
    int n, capacity;
    float ans = 0;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int weights[n], values[n];
    cout<<"Enter weights : "<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>weights[i];
    }

    cout<<"Enter cost prices : "<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>values[i];
        v.push_back(make_pair((double )values[i]/weights[i],i));
    }

    cout<<"Enter total capacity of bag : ";
    cin>>capacity;
    cout<<endl;

    sort(v.begin(), v.end(), cmp);

    for(int i = 0;(i<n && capacity > 0);i++)
    {
        if(weights[v[i].second] < capacity)
        {
            capacity -= (weights[v[i].second]);
            ans += values[v[i].second];
        }
        else
        {
            ans += capacity*v[i].first;
            break;
        }
    }
    cout<<ans;
}