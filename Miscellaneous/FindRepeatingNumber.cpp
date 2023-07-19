/*Given an array of n+1 elements in range 1 to n(inclusive) find the repeated element
 *
 * Conditions
 * Constant Space complexity
 * Should not modify the given array
 * With O(1) time complexity of algorithm*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    int x1 = 0, y1 = 0;
    cin>>n;
    for(int i = 0;i<n+1;i++)
    {
        int x;
        cin>>x;
        x1 = x1^x;
    }
    // We are using xor logic
    for(int i = 1;i<n+1;i++)
    {
        y1 = y1^i;
    }
    cout<<(x1^y1);
}