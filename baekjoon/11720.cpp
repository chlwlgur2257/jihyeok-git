#include<iostream>
using namespace std;

int main()
{
    int n;
    int k;
    int sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        sum+=k;
    }
    cout<<sum<<"\n";
}