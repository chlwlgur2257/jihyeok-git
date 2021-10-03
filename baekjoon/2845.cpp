#include<iostream>

using namespace std;

int main()
{
    int l,p;
    cin>>l>>p;
    int c[5];
    for(int i=0;i<5;i++)
    {
        cin>>c[i];
        cout<<c[i]-(l*p)<<" ";
    }
}