#include<iostream>
#include<string>

using namespace std;

int main()
{
    string n;
    getline(cin,n);

    for(int i=0;i<n.size();i++)
    {
        if(n[i>='a']&&(n[i]<='m'))
        {
            n[i]+=13;
        }
        else if(n[i]>='n'&&n[i]<='z')
        {
            n[i]-=13;
        }
        else if(n[i]>='A'&&n[i]<='M')
        {
            n[i]+=13;
        }
        else if(n[i]>='N'&&n[i]<='Z')
        {
            n[i]-=13;
        }
    }
    cout<<n<<"\n";
}