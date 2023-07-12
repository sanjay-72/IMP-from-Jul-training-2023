#include <iostream>
#include <vector>
using namespace std;

int myPrimes[1001] = {0};
vector <int> realPrimes,NoldBach;
int x,y;

void generatePrimes()
{
    myPrimes[0] = -1;
    myPrimes[1] = -1;
    for(int i = 2;i<1001;i++)
    {
        for(int j = i*2;j<1001;j+=i)
        {
            if(myPrimes[j] == j)
                myPrimes[j] = i;
        }
    }
    for(int i = 2;i<1001;i++)
        if(myPrimes[i] == i)
        {
            realPrimes.push_back(i);
        }
    for(int i = 0;i<realPrimes.size()-1;i++)
    {
        int assumption = realPrimes[i]+realPrimes[i+1]+1;
        if(myPrimes[assumption] == assumption)
            NoldBach.push_back(assumption);
    }
}

int main()
{
    for(int i = 0;i<1001;i++)
        myPrimes[i] = i;
    generatePrimes();
    cin>>x>>y;
    int j;
    for(j = 0;j<NoldBach.size();j++)
    {
        if(x <= NoldBach[j])
            break;
    }
    if(j >= y)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

}