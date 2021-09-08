#include<iostream>
using namespace std;

int main()
{
    int t,n[100]={0},v;
    int count =0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n[i];
    }
    cin>>v;
    for(int i=0;i<t;i++)
    {
        if(n[i]==v)
        {
            count++;
        }
    }
    cout<<count;
}

