#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    cin>>a;

    for(int i=0;i<a.size();i++)
    {
        a[i]+=2;
    }
    cout<<a<<"\n";
    for(int j=0;j<a.size();j++)
    {
        a[j]=(a[j]*7)%80+48;
    }
    cout<<a;
}