#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
    int c;
    cin>>c;
    string n;
    stack<int> st;
    for(int i=0;i<c;i++)
    {
        cin>>n;
        if(n=="push")
        {
            int num;
            cin>>num;
            st.push(num);
        }
        else if (n == "pop") {    //pop 명령어 일때. 
 
            if (!st.empty()) {
                cout << st.top() << endl;
                st.pop();
            } else {
                cout << "-1" << endl;
            }
 
        } else if (n == "size") {        //size 명령어 일때. 
 
            cout << st.size() << endl;
 
        } else if (n == "empty") {    //empty 명령어 일때. 
 
            if (st.empty()) {
                cout << "1" << endl;
            } else {
                cout << "0" << endl;
            }
 
        } else if (n == "top") {        //top 명령어 일때. 
 
            if (!st.empty()) {
                cout << st.top() << endl;
            } else {
                cout << "-1" << endl;
            }
 
        }
 
    }
    return 0;
}