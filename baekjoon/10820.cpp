#include<iostream>
#include<string>
using namespace std;

int main()
{
    string n;
    while(getline(cin,n))
    {
        int a=0,b=0,c=0,d=0;

        for(int i=0;i<n.length();i++)
        {
            if(n[i]>='a'&&n[i]<='z')
            {
                a++;
            }
            else if(n[i]>='A'&&n[i]<='Z')
            {
                b++;
            }
            else if(n[i]>='0'&&n[i]<='9')
            {
                c++;
            }
            else if(n[i]==' ')
            {
                d++;
            }
        }
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";
    }
}