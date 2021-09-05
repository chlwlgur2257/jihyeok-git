#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>n;
        int num=0;
        int sum=0;
        
        for(int j=0;j<n;j++)
        {
            cin>>num;
            sum+=num;
        }
        cout<<sum<<"\n";        
    }


}