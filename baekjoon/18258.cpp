#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main()
{
    int c;
    int n;
    queue<int> q;
    string st;
    int num;
    int data;

    cin>>c;

    for(int i=0;i<c;i++)
    {
        cin>>st;
        if(st=="push")
        {
            cin>>num;
            q.push(num);
        }
        else if(st=="pop")
        {
            if(q.empty())
            {
                cout<<"-1"<<"\n";
            }
            else
            {
                data=q.front();
                q.pop();
            }
        }
        else if(st=="size")
        {
            cout<<q.size()<<"\n";
        }
        else if(st=="empty")
        {
            cout<<q.empty()<<"\n";
        }
        else if(st=="front")
        {
            if(q.empty())
            {
                cout<<"-1"<<"\n";
            }
            else
            {
                cout<<q.front()<<"\n";
            }
        }
        else if(st=="back")
        {
            if(q.empty())
            {
                cout<<"-1"<<"\n";
            }
            else
            {
                cout<<q.back()<<"\n";
            }
        }


    }
}