#include<iostream>
using namespace std;

int main()
{
    int n[9]={0};
    int max=0;
    int number=0;
    for(int i=1;i<=9;i++)
    {
        cin>>n[i];
        if(max<n[i])
        {
            max=n[i];
            number=i;
        }
    }
    cout<<max<<"\n";
    cout<<number;


}