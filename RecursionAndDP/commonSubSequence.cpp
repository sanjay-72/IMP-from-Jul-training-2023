#include <iostream>
using namespace std;

int maxLength = 0;

int checkSequence(string s1, string s2, int i, int j, int l)
{
    if(i >= s1.length() || j >= s2.length())
    {
        return l;
    }
    if(s1[i] == s2[j])
        l++;
    return max(checkSequence(s1,s2,i,j+1,l),checkSequence(s1,s2,i+1,j,l));
}


int main()
{
    string s1,s2;
    cout<<"Enter string 1 : ";
    cin>>s1;
    cout<<"Enter string 2 : ";
    cin>>s2;
    cout<<checkSequence(s1,s2,0,0,0);
}