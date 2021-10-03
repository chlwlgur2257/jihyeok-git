#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int c;
    while(1)
    {
        cin>>c;
        if(c%n!=0)
        {
            cout<<c<<"is NOT a multiple of"<<n<<"\n";
        }
        else
        {
            cout<<c<<"is a multiple of"<<n<<"\n";
        }
        if (c=='0')
        {
            break;
        }
    }
}