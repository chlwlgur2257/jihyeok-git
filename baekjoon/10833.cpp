#include<iostream>
using namespace std;

int main()
{
    int school,student,apple;
    int cute=0;
    cin>>school;

    for(int i=0;i<school;i++)
    {
        cin>>student>>apple;

        cute+=apple % student;

    }
    cout<<cute<<"\n";
}