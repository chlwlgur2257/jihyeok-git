#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int j;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>j;
        sum+=j;
    }
    cout<<sum-(n-1);
}