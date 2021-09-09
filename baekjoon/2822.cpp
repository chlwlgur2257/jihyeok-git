#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n[8]={0};
    int b[8]={0};
    int sum=0;
    for(int i=0;i<8;i++)
    {
        cin>>n[i];
        b[i]=n[i];
    }
    sort(b,b+8);

    sum=b[7]+b[6]+b[5]+b[4]+b[3];

    cout<<sum<<"\n";
    for(int i=0;i<8;i++)
    {
        for(int j=3;j<=7;j++)
        {
            if(n[i]==b[j])
            {
                cout<<i+1<<" ";
            }
        }
    }
}







