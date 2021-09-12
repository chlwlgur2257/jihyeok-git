#include<iostream>
using namespace std;

int main()
{
    int n,k;
    int a[10];
    int count=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i =n-1;k>0;)
    {
        if(a[i]>k)
        {
            i--;
        }
        if(a[i]<=k)
        {
            k-=a[i];
            count++;
        }
    }
    cout<<count;
}