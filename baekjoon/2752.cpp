#include<iostream>
using namespace std;

int main()
{
    int n[3]={0};
    int max=0;
    int min=10000;
    int middle;

    for(int i=0;i<3;i++)
    {
        cin>>n[i];
        if(n[i]>max)
        {
            max=n[i];
        }
        if(n[i]<min)
        {
            min=n[i];
        }
        if(n[i]!=max&&n[i]!=min)
        {
            middle=n[i];
        }
    }
    cout<<min<<middle<<max;
}