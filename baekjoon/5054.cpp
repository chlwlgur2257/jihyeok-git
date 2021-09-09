#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int sum=0;
        cin>>n;
        vector<int>v(n);
        for(int j=0;j<n;j++)
        {
            cin>>v[j];
        }
        sort(v.begin(),v.end());
        for(int j=1;j<n;j++)
        {
            sum = sum + (v[j] - v[j - 1]);
        }    
        cout<<sum*2<<"\n";
    }
}