//WAP to find the missing number in given range
#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n,x1 = 0,x2 = 0,sum = 0;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        x1 = x1^i;
    }
    for(int i = 0; i<n-1; i++)
    {
        int temp;
        cin>>temp;
        x2 = x2^temp;
    }
    cout<<(x1 ^ x2);
}