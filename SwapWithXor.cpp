#include<iostream>
using namespace std;
int main()
{
    int a = 10, b = 20;
    cout<<"A = "<<a<<endl<<"B = "<<b<<endl;
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<"A = "<<a<<endl<<"B = "<<b<<endl;
}