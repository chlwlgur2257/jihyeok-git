#include<iostream>
using namespace std;

int main()
{
    int num[6]={0};
    int z=0;
    int sum=0;

    for(int i=1;i<=5;i++)
    {
        cin>>num[i];
        sum+=num[i]*num[i];
    }
    cout<<sum%10;
}