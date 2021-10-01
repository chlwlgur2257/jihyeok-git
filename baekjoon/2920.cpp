#include<iostream>

using namespace std;

int main()
{
    int n[8];
    int asc=0;
    int des=0;
    for(int i=0;i<8;i++)
    {
        cin>>n[i];
    
        if(n[i]==i+1)
        {
            asc++;
        }
        else if(n[i]==8-i)
        {
            des++;
        }
    }
    if (asc == 8)
    {
        cout << "ascending" << endl;
    }
    else if (des == 8)
    {
        cout << "descending" << endl;
    }
    else
    { 
        cout << "mixed" << endl;
    }


}