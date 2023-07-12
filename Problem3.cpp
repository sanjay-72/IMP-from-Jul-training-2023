#include<iostream>
using namespace std;

int main()
{
    long long int tests;
    cin>>tests;
    while(tests--)
    {
        long long int N,ans = 0;
        cin>>N;
        long long int arr[N];
        for(int i = 0;i<N;i++)
        {
            if(i % 2 == 0)
            {
                if(i+2 >= N)
                {
                    ans += (i+1) ^ N;
                }
                else
                    ans += (i+1) ^ i+2;
            }
            else
                ans += (i+1) ^ i;
        }
        cout<<ans<<endl;
    }
}