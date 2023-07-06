#include<iostream>
using namespace std;
int myf[100] = {0};
int fibo(int n)
{
    cout<<"call"<<endl;
    if(myf[n] != 0)
        return myf[n];
    if(n < 2)
        return n;
    return myf[n] = fibo(n-1)+fibo(n-2);
}
int main()
{
    int n;
    cin>>n;

    cout<<fibo(n);
}