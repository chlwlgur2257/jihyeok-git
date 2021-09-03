#include<iostream>
using namespace std;

int main()
{
    int score=0,total=0;

    for(int i=0;i<5;i++)
    {
        cin>>score;
        total+=score;
    }
    cout<<total;
}