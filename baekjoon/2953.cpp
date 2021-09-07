#include<iostream>
using namespace std;

int main()
{
    int sc[5][5]={0};
    int max=0;
    int count=0;

    for(int i=0;i<5;i++)
    {
        int sum=0;
        for(int j=0;j<4;j++)
        {
            cin>>sc[i][j];
            sum+=sc[i][j];
        }
        if(sum>max)
        {
            max=sum;
            count=i+1;
        }
    }
    cout<<count<<" "<<max;
}