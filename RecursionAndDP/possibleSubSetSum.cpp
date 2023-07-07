// Using binary combinations to print all subsets
#include<iostream>
using namespace std;
int target,n,a,b;
bool ans = false;
void genSubSetSums(string s,int arr[])
{
    if(ans)
        return;
    if(s.length() == n)
    {
        int sum = 0;
        for(int i = 0;i<n;i++)
            if(s[i] == '1')
                sum+=arr[i];
        if(sum == a+b)
            ans = true;
        return;
    }
    genSubSetSums(s+"0",arr);
    genSubSetSums(s+"1",arr);
}
int main()
{
    bool possibility = false;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
        cin>>arr[i];
    cin>>a>>b;
    genSubSetSums("",arr);

    if(ans)
        cout<<"Possible."<<endl;
    else
        cout<<"Not possible"<<endl;
}