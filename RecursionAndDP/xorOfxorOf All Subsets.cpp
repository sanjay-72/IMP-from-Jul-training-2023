/* Problem we have to find xor(xor(all subsets)
 * In all subsets each element repeats for 2 power(n-1) times which is always even.
 * We clearly know that the xor of elements which are repeating for even number of times is zero.
 * So it will be always zero except when only one element is given.
 * Otherwise it is always 0.
 * If one element is given 2 power(1-1) = 1 which is odd gives the number itself*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n == 1)
        cout<<arr[0]<<endl;
    else
        cout<<"0"<<endl;
}