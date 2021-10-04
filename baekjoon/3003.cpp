#include<iostream>

using namespace std;

int main()
{
    int n[6]={1,1,2,2,2,8};
    int k[6];
    for(int i=0;i<6;i++)
    {
        cin>>k[i];
        cout<<n[i]-k[i]<<" ";
    }
}