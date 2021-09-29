#include <iostream>
#include <string>
#include<algorithm>

using namespace std;
int main()
{
	while (1) {
		string n;
		getline(cin, n,'\n');
		if (n == "EOI")
			break;
		if (n.find("NEMO") != string::npos)
			cout << "Found\n";
		else
			cout << "Missing\n";
	}
}