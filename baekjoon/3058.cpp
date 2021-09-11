#include<iostream>
using namespace std;

int main()
{
    int t;
    int n[7];
    int min=101;

    cin>>t;
    for(int i=0;i<t;i++)
    {
        int sum=0;
        for(int j=0;j<7;j++)
        {
            cin>>n[i];
            if(n[i]%2==0)
            {
                sum+=n[i];
                if(n[i]<min)
                {
                    min=n[i];
                }
            }
        }
        cout<<sum<<" "<<min<<"\n";
    }
}