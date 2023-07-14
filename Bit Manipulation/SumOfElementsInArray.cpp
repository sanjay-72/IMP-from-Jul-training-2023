#include<iostream>
using namespace std;
int n;
int countLastBits(int arr[])
{
    int a = 1,lastSetBits = 0;
    for(int i = 0;i<n;i++)
    {
        if(a & arr[i])
        {
            lastSetBits++;
        }
        if(arr[i] > 0)
            arr[i] = arr[i]>>1;
    }
    return lastSetBits;
}

int main()
{
    cin>>n;
    int arr[n],sum = 0;
    for(int i = 0;i<n;i++)
        cin>>arr[i];
    for(int i = 0;i<64;i++)
    {
        int lastBits = countLastBits(arr);
        sum += pow(2, i)*lastBits;
    }
    cout<<sum;
}