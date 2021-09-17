#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    while(1)
    {
        string n;
        getline(cin,n);
        if(n=="END")
        {
            break;
        }
        reverse(n.begin(),n.end());
        cout<<n;
    }
}