#include <iostream>
using namespace std;

int main()
{
    int n, capacity;
    float ans = 0;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int weights[n], values[n];
    float costPerKg[n];
    cout<<"Enter weights : "<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>weights[i];
    }

    cout<<"Enter cost prices : "<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>values[i];
    }

    cout<<"Enter total capacity of bag : ";
    cin>>capacity;

    for(int i = 0;i<n;i++)
    {
        costPerKg[i] = values[i] / weights[i];
        cout<<costPerKg[i]<<" ";
    }
    cout<<endl;

    while(capacity > 0)
    {
        int maxi = 0,i;
        for(i = 0;i<n;i++)
            if(costPerKg[i] > costPerKg[maxi])
                maxi = i;
        if(capacity >= weights[maxi])
        {
            ans += (float)values[maxi];
            capacity -= weights[maxi];
            weights[maxi] = 0;
            values[maxi] = 0;
            costPerKg[maxi] = 0;
        }
        else
        {
            while(capacity > 0)
            {
                ans += (float)costPerKg[maxi];
                capacity -= 1;
            }
            costPerKg[maxi] = 0;
            weights[maxi] = 0;
            values[maxi] = 0;
        }

    }
    cout<<"Maximum of : "<<ans<<" is possible."<<endl;
}