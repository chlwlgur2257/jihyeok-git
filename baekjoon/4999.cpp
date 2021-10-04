#include<iostream>
#include<string>

using namespace std;

int main()
{
    string n;
    cin>>n;
    string k;
    cin>>k;
    
    if(k.length()>=n.length())
    {
        cout<<"no";
    }  
    else
    {
        cout<<"go";
    }
}