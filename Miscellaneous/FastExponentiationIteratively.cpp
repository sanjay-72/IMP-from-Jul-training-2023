#include<iostream>
using  namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int ans = 1;
    while(b>0)
    {
        if(b&1)
            ans = ans*a;
        a *= a;
        b /= 2;
    }
    cout<<ans;
}