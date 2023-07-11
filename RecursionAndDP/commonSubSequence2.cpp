#include <iostream>
using namespace std;
int dp[10001][10001];
int maxLength = 0;

int checkSequence(string s1, string s2, int i, int j)
{
    if(dp[i][j] != -1)
        return dp[i][j];
    if(i < 0 || j < 0)
        return 0;
    if(s1[i] == s2[j])
    {
        int x = checkSequence(s1, s2, i-1, j-1);
        return 1+x;
    }
    int a = checkSequence(s1, s2, i, j-1);
    int b = checkSequence(s1, s2, i-1, j);
    dp[i][j] = max(a,b);
    return max(a,b);
}


int main()
{
    for(int i = 0; i < 10001; i++)
        for(int j = 0;j<10001;j++)
            dp[i][j] = -1;
    string s1,s2;
    cout<<"Enter string 1 : ";
    cin>>s1;
    cout<<"Enter string 2 : ";
    cin>>s2;
    cout<<checkSequence(s1,s2,s1.length()-1,s2.length()-1);
}