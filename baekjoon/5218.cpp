#include<iostream>
#include<string>
using namespace std;

int main()
{
    int k;
    cin>>k;
    string a,b;
    int arr[100];
    
    for(int i=0;i<k;i++)
    {
        cin>>a>>b;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]>b[i])
            {
                arr[i]=b[i]-a[i];
            }
            else if(a[i]<=b[i])
            {
                arr[i]=b[i]-a[i];
            }
        }
        cout<<"Distances: ";
        for(int i=0;i<a.size();i++)
        {
            cout<<arr[i]<<' ';
        }
        cout<<"\n";
    }

}