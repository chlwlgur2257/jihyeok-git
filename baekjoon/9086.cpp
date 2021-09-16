#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string n;
    int k;
    cin>>k;

    for(int i=0;i<k;i++)
    {
        cin>>n;
        cout<<n[0]<<n[n.size()-1]<<"\n";
    }
}