/* There are two persons A and B playing in the garden playing with two dice. If the sum of two dice is greater than
 * six they are winner. You have to print that winner. You are given X and Y the values each dice */
#include <iostream>
using namespace std;

int main()
{
    int tests;
    cin>>tests;
    while(tests--)
    {
        int x,y;
        cin>>x>>y;
        if(x+y > 6)
            cout<<"Winner"<<endl;
        else
            cout<<"Loser"<<endl;
    }
}