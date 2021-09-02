#include<iostream>
#include<string>
#include <stdlib.h>
using namespace std;

int main()
{
    int c;
    cin>>c;
    int pluse;
    string cute;

    for(int i=0;i<c;i++)
    {
        cin>>cute;

        int a,b;
        if(cute=="P=NP")
        {
            cout<<"skipped"<<"\n";
        }
        else
        {
            pluse=cute.find('+');
            a=stoi(cute.substr(0,pluse));
            b=stoi(cute.substr(pluse+1));
            
            cout<<a+b<<"\n";
        }
        
    }
    return 0;
}