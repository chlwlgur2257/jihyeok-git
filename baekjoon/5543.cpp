#include<iostream>
using namespace std;

int main()
{
    int price[1000]={0};
    int min=9999;
    int min2=9999;
    int sum=0;

    for(int i=0;i<5;i++)
    {
        cin>>price[i];
    }
    for(int i=0;i<3;i++)
    {
        if(price[i]<min)
        {
            min=price[i];
        }
    }
    for(int i=3;i<5;i++)
    {
        if(price[i]<min2)
        {
            min2=price[i];
        }
    }
    sum=min+min2;
    cout<<sum-50;
}