#include<iostream>
#include<string>
using namespace std;

int main()
{
    int k[26]={0};
    string n;
    cin>>n;

    for(int i=0;i<n.size();i++)
    {
        k[n[i]-97]++;
    }
    for(int i=0;i<26;i++)
    {
        cout<<k[i]<<" ";
    }
}
