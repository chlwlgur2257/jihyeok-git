#include<iostream>
using namespace std;

int main()
{
    int n[10]={0};

    
    for(int j=0;j<3;j++)
    {
        int sum=0;
        for(int i=1;i<=4;i++)
        {
            cin>>n[i];
            sum+=n[i];
        }
        if(sum==3){cout<<"A"<<"\n";}
        else if(sum==2){cout<<"B"<<"\n";}
        else if(sum==1){cout<<"C"<<"\n";}
        else if(sum==4){cout<<"D"<<"\n";}
        else if(sum==0){cout<<"E"<<"\n";}
    }
}