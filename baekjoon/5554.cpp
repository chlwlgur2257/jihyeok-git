#include<iostream>

using namespace std;

int main()
{
    int n;
    int sum=0;

    for(int i=0;i<4;i++)
    {
        cin>>n;
        sum+=n;
    }
    cout<<sum/60<<"\n";
    cout<<sum%60;
}