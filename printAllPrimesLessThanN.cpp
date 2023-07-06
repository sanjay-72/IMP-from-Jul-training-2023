//This technique is also known as Sieve of Eratosthenes
#include <iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"Enter the number : ";
    cin>>n;
    bool primes[n+1];
    for(i = 0;i<n+1;i++)
        primes[i] = true;
    primes[0] = false;
    primes[1] = false;

    for(i = 2;i<n+1;i++)
    {
        if(primes[i])
        {
            for(j = i*2;j<n+1;j+=i)
            {
                primes[j] = false;
            }
        }
    }
    for(i = 0;i<n+1;i++)
        if(primes[i])
            cout<<i<<" ";
}