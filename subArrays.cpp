#include<iostream>
using namespace std;
int main()
{
    int arr[3] = {1, 2, 3};
    int i,j,k,n = 3;
    for(i = 0;i<n;i++)
    {
        for(j = i;j<n;j++)
        {
            for(k = i;k<=j;k++)
                cout<<arr[k]<<" ";
            cout<<endl;
        }
    }
}