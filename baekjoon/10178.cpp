#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int c,v;
    int f=0,p=0;

    for(int i=0;i<test;i++)
    {
        cin>>c,v;
        f=c/v;
        p=c%v;

        cout<<"You get "<< f <<" piece(s) and your dad gets "<< p <<" piece(s)."<<"\n";    
    }
}