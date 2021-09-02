#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int q,p,k,car=0,sum=0;

    for(int i=0;i<n;i++)
    {
        cin>>car>>k;
        for(int j=0;j<k;j++)
        {
            cin>>q>>p;
            sum+=q*p;
        }
        cout<<car+sum;
    }
}