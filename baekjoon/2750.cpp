#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	int temp = 0;
	cin >> n;

	if (abs(n) < 1 || abs(n) > 1000)
		return 0;

	int *arr = new int[n + 1];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
		cout << arr[i] << endl;

	delete[] arr;

	return 0;
}