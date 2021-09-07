#include<iostream>
using namespace std;

int main()
{
    int a[10]={0};
    int average=0;
    int sum=0;
    int m=0,k;

    for(int i=0;i<10;i++)
    {
        cin>>a[i];
        sum+=a[i];
        average=sum/10;
    }
    for(int i=0;i<10;i++)
    {
        if(a[i]==m)
        {
            m=a[i];
            k=a[i];
        }
    }
    cout<<average<<"\n";
    cout<<k;
}