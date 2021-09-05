#include<iostream>
using namespace std;
int main()
{
    int k;//위반번호
    int n[10]={0};//자동차 일의자리 숫자
    cin>>k;
    int count=0;

    for(int i=0;i<5;i++)
    {
        cin>>n[i];
        if(k==n[i])
        {
            count++;
        }
    }
    cout<<count;
}