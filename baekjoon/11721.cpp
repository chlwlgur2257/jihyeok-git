#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n;
    cin>>n;
    for(int i=0;i<n.length();i++)
    {
        cout<<n[i];
        if((i+1)%10==0)
        {
            cout<<"\n";
        }
    }
    cout<<"\n";
}