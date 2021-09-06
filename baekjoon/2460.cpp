#include<iostream>
using namespace std;

int main()
{
    int in,out;
    int sum=0;
    int max=0;

    for(int i=0;i<10;i++)
    {
        cin>>out>>in;
        sum+=in;
        sum-=out;
        if(sum>max)
        {
            max=sum;
        }
    }
    cout<<max;

}