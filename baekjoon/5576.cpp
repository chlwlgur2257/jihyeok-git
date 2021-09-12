#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n[10],k[10];
    int sum=0;
    int sum2=0;
    for(int i=0;i<10;i++)
    {
        cin>>n[i];
    }
    for(int j=0;j<10;j++)
    {
        cin>>k[j];
    }
    sort(n,n+10);
    sort(k,k+10);

    for(int i=7;i<=9;i++)
    {
        sum+=n[i];
    }
    for(int i=7;i<=9;i++)
    {
        sum2+=k[i];
    }
    cout<<sum<<" "<<sum2;

}