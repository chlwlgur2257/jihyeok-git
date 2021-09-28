#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
    vector<int> result;
    for (int i = 1; i <= 5; i++)
    {
        string s;
        cin >> s;
        bool fbi = false;
        for (int j = 0; j < s.length(); j++)
        {
            if (j + 2 < s.length() && s[j] == 'F' && s[j + 1] == 'B' && s[j + 2] == 'I')
            {
                fbi = true;
                break;
            }
        }
        if (fbi)
        {
            result.push_back(i);
        }
    }
    if (result.empty())
    {
        cout << "HE GOT AWAY!\n";
        return 0;
    }
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << "\n";
    return 0;
}