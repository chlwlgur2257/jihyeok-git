#include<iostream>
#include<string>
using namespace std;

int main()
{
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    string day[7]={"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
    int a,b;
    cin>>a>>b;
    int count=0;

    for(int i=0;i<=a;i++)
    {
        if ((i + 1) == a)
		{
			count += b; 
		}
		else 
		{
			count += month[i];
		}
    }
    cout<<day[count%7]<<"\n";
}