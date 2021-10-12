#include<iostream>

using namespace std;

int main()
{
    int L, A, B, C, D;
    cin >> L >> A >> B >> C >> D;
    int temp1 = L - (A / C);

    if (A%C)
    {
        temp1--;
    }
    int temp2 = L - (B / D);

    if (B%D)
    {
        temp2--;
    }
    cout << min(temp1, temp2) << "\n";

    return 0;
}