#include<iostream>
using namespace std;
int main()
{
    int c;
    cin>>c;
    while(c--)
    {
        int q=0,d=0,o=0,p=0;
        int n;
        cin>>n;
        while(n>0)
        {
            if(n>=25)
            {
                q++;
                n-=25;
            }
            else if(n>=10)
            {
                d++;
                n-=10;
            }
            else if(n>=5)
            {
                o++;
                n-=5;
            }
            else
            {
                p++;
                n-=1;
            }
        }
        cout<<q<<" "<<d<<" "<<o<<" "<<p<<" "<<"\n";
    }
}