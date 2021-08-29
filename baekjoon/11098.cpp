#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;//testcase

    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        int max=0, k=0;
        vector<pair<int,string>> s(p);

        for(int j=0;j<p;j++)
        {
            cin>>s[i].first>>s[i].second;
        }
        if(s[i].first>max)
        {
            max=s[i].first;
            k=i;
        }
        
        cout<<s[k].second<<"\n";
    }
}