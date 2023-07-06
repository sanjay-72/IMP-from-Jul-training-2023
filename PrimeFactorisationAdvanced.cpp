//This technique modified Sieve of Eratosthenes
// Here instead of storing a number is prime or not, we are storing the smallest prime factor of the number
#include <iostream>
using namespace std;

int main()
{
    int n,i,j,tests;
    n = 1000001;
    int primes[n];
    for(i = 0;i<n+1;i++)
        primes[i] = i;
    primes[0] = 0;
    primes[1] = 0;
    for(i = 2;i<n+1;i++)
    {
        if(primes[i])
        {
            for(j = i*2;j<n+1;j+=i)
            {
                if(primes[j] == j)
                primes[j] = i;
            }
        }
    }
    cout<<"Enter how many test cases : ";
    cin>>tests;
    while(tests--)
    {
        int myNum;
        cout<<"Enter the number : ";
        cin>>myNum;
        while(myNum>1)
        {
            cout<<primes[myNum]<<" ";
            myNum /= primes[myNum];
        }
        cout<<endl;
    }

}