//Here the time complexity of code is O(LogN)

#include <iostream>
using namespace std;

int fastExp(int a, int b)
{
    if(b == 0)
        return 1;
    if(b == 1)
        return a;
    int x = fastExp(a,b/2);
    int y = x*x;
    if(b&1)
        return a*y;
    return y;
}

int main() {
    int a,b;
    cin>>a>>b;
    cout<<fastExp(a,b);
    return 0;
}