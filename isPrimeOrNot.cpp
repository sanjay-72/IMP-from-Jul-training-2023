#include<iostream>
using namespace std;
bool isPrime(int x)
{
    for(int i = 2;i<=sqrt(x);i++)
        if(x % i == 0)
            return false;
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cout<<"Enter a number : ";
        cin>>x;
        if(isPrime(x))
            cout<<x<<" is a Prime Number.";
        else
            cout<<x<<" is not a Prime Number.";
    }
}