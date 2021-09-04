#include<iostream>
using namespace std;

int main()
{


    int num[8]={0};
    int hole=0;
    int sum=0;
    int min=1000;

    for(int i=1;i<=7;i++)
    {
        cin>>num[i];
        if(num[i]%2!=0)
        {
            sum+=num[i];
            if(num[i]<min)
            {
                
                min=num[i];
            }
        }
    }
    cout<<sum<<"\n";
    cout<<min;

}