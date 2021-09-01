#include<iostream>
using namespace std;

int main()
{
    int num=0;
    int a[100]={0};
    int b[100]={0};
    int i;
    cin>>num;

    for(int i=0;i<num;i++)
    {
        cin>>a[i];
        cin>>b[i];
        cout<<a[i]+b[i]<<"\n";
    }
}