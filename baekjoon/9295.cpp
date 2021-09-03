#include<iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;
    int num1,num2;

    for(int i=1;i<=test;i++)
    {
        cin>>num1>>num2;
        cout<<"Case "<<i<<" : "<<num1+num2;
    }
}