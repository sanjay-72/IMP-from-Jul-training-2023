/* How do you find all the distinct pairs of an integer array whose sum is equal to given integer*/
#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    int start = 0, end=n-1;
    for(int i = 0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    while(start<end)
    {
        if(arr[start]+arr[end] == x)
        {
            cout<<arr[start]<<" "<<arr[end]<<endl;
            start++;
            end--;
        }
        else if(arr[start]+arr[end] > x)
        {
            int elem = arr[end];
            while(arr[end] == elem)
            {
                end--;
            }
        }
        else if(arr[start]+arr[end] < x)
        {
            int elem = arr[start];
            while(arr[start] == elem)
            {
                start++;
            }
        }
    }
}