#include<iostream>
using namespace std;

int main()
{
    int total=0;
    int sum=0;
    int n[9]={0};
    cin>>total;

    for(int i=0;i<9;i++)
    {
        cin>>n[i];
        sum+=n[i];
    }
    cout<<total-sum;
}