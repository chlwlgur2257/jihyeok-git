#include<iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    int a,b;
    int day=0;
    for(int i=0;i<c;i++)
    {
        cin>>a>>b;
        if(a%b!=0)
        {
            day=a/b;
            day++;
        }
        else
        {
            day=a/b;
        }
        cout<<day<<"\n";
    }
}