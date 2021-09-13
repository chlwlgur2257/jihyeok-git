#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n;
    cin>>n;

    for(int i=0;i<n.length();i++)
    {
        char c=n[i];
        if('a'<=c&&c<='z')
        {
            n[i]=n[i]-32;
        }
        else
        {
            n[i]=n[i]+32;
        }
    }
    cout<<n<<"\n";


}