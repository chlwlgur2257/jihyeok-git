#include<iostream>
#include<string>
using namespace std;

int main()
{
    int count=1;
    string n;
    cin>>n;
    for(int i=0;i<n.length();i++)
    {
        if(n[i]==',')
        {
            count++;
        }
    }
    cout<<count<<"\n";
}