#include <iostream>

#include <vector>

#include <string>

using namespace std;

 

int main(void)

{
    int N;
    cin >> N;
    vector<vector<char>> v(26, vector<char>(0));
    for (int i = 0; i < N; i++)
    {
        string name;
        cin >> name;
        v[int(name[0] - 97)].push_back('a');
    }
    string result;
    
    for (int i = 0; i < 26; i++)
    {
        if (v[i].size() >= 5)
        {
            result += char(i + 97);
        }
    }
    if (result.empty())
    {
        cout << "PREDAJA\n";
    }
    else
    {
        cout << result << "\n";
    }
    return 0;
}