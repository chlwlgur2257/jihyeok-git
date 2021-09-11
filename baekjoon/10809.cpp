#include<iostream>
#include<string>
using namespace std;

int main()
{
    string n;
    cin>>n;
    int arr[26];
    for(int i=0;i<26;i++)
    {
        arr[i]=-1;
    }

    for(int i=0;i<n.length();i++)
    {
        if(arr[(int)n[i]-97]<0){
            arr[(int)n[i]-97]=i;
        }
    }
    for(int i=0;i<26;i++)
    {
        cout<<arr[i]<<" ";
    }

}