#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k[100]={0};
    int min=10000;
    int max=0;

    for(int i=0;i<n;i++)
    {
        cin>>k[i];
        if(k[i]>max)
        {
            max=k[i];
        }
        if(k[i]<min)
        {
            min=k[i];
        }
    }
    cout<<min<<max;
}