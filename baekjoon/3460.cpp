#include <iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;
        int d=0;
        while(n>0)
        {
            if(n%2==1)
            {
                cout<<d<<" ";
            }
            n/=2;
            d++;
        }
    }
}