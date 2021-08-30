#include<iostream>
#include<string>
using namespace std;

int main()
{
    string now,start;
    cin>>now;
    cin>>start;

    int h1,m1,c1,h2,m2,c2;
    int h,m,c;

     h1 = atoi(&now[0]);
     m1 = atoi(&now[3]);
     c1 = atoi(&now[6]);
     
     h2 = atoi(&start[0]);
     m2 = atoi(&start[3]);
     c2 = atoi(&start[6]);
     if(h2>h1)
     {
         h=h2-h1;
     }
     else
     {
        h=00;
     }
     if(m1>m2)
     {
         m=60+m2-m1;
         h-=1;
     }
     else
     {
         m=m2-m1;
     }
     if(m1>m2)
     {
         c=60+c2-c1;
         m-=1;
     }
     else
     {
         c=c2-c1;
     }

     cout<<h<<":"<<m<<":"<<c;
}