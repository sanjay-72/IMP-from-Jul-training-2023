//In this program we are using both Sieve of Eratosthenes and Prefix technique
#include <iostream>
using namespace std;

int primes[100000];

int main() {

    int i,j,sum = 0;
    for(i = 0;i<100000;i++)
        primes[i] = i;

    primes[0] = 0;
    primes[1] = 0;

    for(i = 2;i<100000;i++)
    {
        if(primes[i] == i)
        {
            for(j = i*2;j<100000;j+=i)
            {
                primes[j] = 0;
            }
        }
    }
    for(i = 2;i<100000;i++)
    {
        sum += primes[i];
        primes[i] = sum;
    }

    int tests;
    cin>>tests;
    while(tests--)
    {
        int l,r;
        cout<<"Enter starting : ";
        cin>>l;
        cout<<"Enter ending : ";
        cin>>r;
        cout<<primes[r]-primes[l]<<endl;
    }
    return 0;
}