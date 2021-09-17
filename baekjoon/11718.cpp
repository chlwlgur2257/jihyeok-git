#include<iostream>
#include<string>
using namespace std;

int main()
{
    string n;
    while(1)
    {
        getline(cin,n);
        if (n=="")
            break;
        cout<<n;
    }
}