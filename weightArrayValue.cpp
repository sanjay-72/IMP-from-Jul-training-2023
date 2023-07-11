#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

bool cmp(pair<float, int> a, pair<float, int> b)
{
    if (a.first>b.first)
        return true;
    if (a.first == b.first)
    {
        if(a.second > b.second)
            return true;
        return false;
    }
    return false;
}
int main()
{
    int n;
    cout<<"Enter the number of values : ";
    cin>>n;
    int weights[n], values[n];
    double costPerKg[n];
    vector<pair<float,int> > v;
    cout<<"Enter the weights : "<<endl;
    for(int i = 0;i<n;i++)
        cin>>weights[i];
    cout<<"Enter the values : "<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>values[i];
        costPerKg[i] = (float)values[i]/weights[i];
    }

    for(int i = 0;i<n;i++)
        v.push_back(make_pair(costPerKg[i],i));

    cout<<"Before sorting : "<<endl;
    for(auto x:v)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }

    sort(v.begin(),v.end(),cmp);

    cout<<"After sorting : "<<endl;
    for(auto x:v)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}