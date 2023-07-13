#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n], ans = 0;
    for(int i = 0;i<n;i++)
        cin>>arr[i];
    int i,j,k;
    for(i = 0;i<n;i++)
    {
        int temp = 0;
        for(j = i;j<n;j++)
        {
            temp = temp ^ arr[j];
            ans += temp;
        }
    }

    cout<<ans<<endl;
}