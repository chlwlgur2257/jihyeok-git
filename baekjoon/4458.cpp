#include <iostream>
#include <string>
using namespace std;
 
string s;
int T;
int main() {


    cin >> T;
    cin.ignore();
    while (T--) {
        getline(cin, s );
        if (s[0] >= 97 && s[0] <= 122) {
            s[0] -= 32;
        }
        cout << s << endl;
    }
}