#include <iostream>
using namespace std;

int main() {
	int n;
	int score;
	int max = 0;
	double result = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> score;
		if (score > max)
			max = score;
		result += score;
	}
	result = (result / max * 100) / n;

	cout << fixed;
	cout.precision(6);
	cout << result << endl;
}