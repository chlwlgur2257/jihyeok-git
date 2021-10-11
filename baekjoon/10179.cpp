#include<iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    double n;
    for(int i=0;i<c;i++)
    {
        cin>>n;
        double k=n*0.8;
        printf("$%.2lf\n", k);
    }
}