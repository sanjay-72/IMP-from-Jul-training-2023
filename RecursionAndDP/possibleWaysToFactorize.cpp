#include <iostream>
using namespace std;
int cnt = 0;
void factorize(int x, int i)
{
    if(i>x)
    {
        if(x == 1)
            cnt++;
        return;
    }
    if(x % i == 0)
        factorize(x/i,i+1);
    factorize(x,i+1);
}
int main()
{
    int n;
    cin>>n;
    factorize(n, 2);
    cout<<cnt+1;    //+1 is because all numbers can be factorised by 1*itself
}