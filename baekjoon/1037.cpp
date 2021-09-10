#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,b[100];
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    sort(b,b+n);

    ans=b[0]*b[n-1];
    cout<<ans;
}