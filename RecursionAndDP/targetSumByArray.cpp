#include<iostream>
using namespace std;
int n;
bool flag=false;
void findTargets(int x, int i, int arr[])
{
    cout<<x<<" "<<i<<endl;
    if(i >= n) {
        if(x==0)
            flag=true;
        return;
    }
    findTargets(x-arr[i],i+1,arr);
    findTargets(x, i+1, arr);
}

int main()
{
    int target;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
        cin>>arr[i];
    cin>>target;
    findTargets(target, 0, arr);
    cout<<flag;
}