#include<iostream>
using namespace std;
string s;
bool isPalindrome(int i,int j)
{
    if(s.length() == 1 || i>j)
        return true;
    return s[i] == s[j] && isPalindrome(i+1,j-1);
}

int main()
{
    int tests;
    cin>>tests;
    while(tests--)
    {
        cout<<"Enter a string : ";
        cin>>s;
        if(isPalindrome(0,s.length()-1))
            cout<<"Palindrome"<<endl;
        else
            cout<<"Not Palindrome"<<endl;
    }
}