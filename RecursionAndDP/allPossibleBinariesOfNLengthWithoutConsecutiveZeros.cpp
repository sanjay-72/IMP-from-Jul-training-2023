#include<iostream>
using namespace std;
string s0 = "0",s1 = "1";
int n;
void printNonRepBinaries(string s)
{
    if(s.length() == n)
    {
        cout<<s<<endl;
        return;
    }
    if(s.length() == 0 || s[s.length()-1] == '1')
    printNonRepBinaries(s+"0");
    printNonRepBinaries(s+"1");

}
int main()
{
    cin>>n;
    printNonRepBinaries("");

}