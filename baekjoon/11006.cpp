#include<iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    for(int i=0;i<c;i++)
    {
        int a,b;
        cin>>a>>b;
        cout<<b*2-a<<" "<<a-b<<"\n";
    }

}