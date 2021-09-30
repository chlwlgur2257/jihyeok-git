#include <iostream>
using namespace std;
int a[31], i = 28, b;
int main() {
	int a[31], i = 28, b;
	while (i--) {
		cin >> b;
		a[b] = 1;
	}
	for (i = 1; i <= 30; i++)	if (!a[i])	cout << i << endl;
}