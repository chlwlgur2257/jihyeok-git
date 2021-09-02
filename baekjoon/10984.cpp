#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    double ans1=0;
    double ans2=0.0;
    cout << fixed;
    cout.precision(1);

    for(int i=0;i<num;i++)
    {
        int k;
        cin>>k;
        for(int j=0;j<k;j++)
        {
            int b;
            double v;

            cin>>b>>v;

            ans1+=b;
            ans2+=b*v;
        }
        cout<<ans1<<ans2/ans1<<"\n";
    }
}