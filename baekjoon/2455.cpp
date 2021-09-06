#include<iostream>

using namespace std;

int main()
{
    int num[100]={0};
    int pum[100]={0};
    int sum=0;
    int kum=0;
    int max=0;

    for(int i=0;i<4;i++)
    {
        cin>>num[i]>>pum[i];

        sum-=num[i];
        sum+=pum[i];
        if(max<sum)
        {
            max=sum;
        }
    }
    cout<<max;

}