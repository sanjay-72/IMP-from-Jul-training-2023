// All combinations binary number of length n
#include <iostream>
using namespace std;
string s0="0",s1="1";

void solve(int n, string s)
{
    if(s.length() == n)
    {
        cout<<s<<endl;
        return;
    }
    solve(n,s+s0);
    solve(n,s+s1);
}

int main() {
    int tests;
    cin>>tests;
    while(tests--)
    {
        int n;
        cin>>n;
        solve(n,"");
    }
    return 0;
}