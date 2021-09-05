#include<iostream>
using namespace std;

int main()
{
    int num;
    int sum=0;
    int sc;
    int count=0;
    cin>>num;
    for(int i=1;i<num;i++)
    {
        cin>>sc;
        if(sc==1)
        {
            count++;
        }
        else
        {
            count=0;
        }
        sum+=count;
    }
    cout<<sum;
}