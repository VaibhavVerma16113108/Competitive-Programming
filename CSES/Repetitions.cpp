#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int longest = 1, curr = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            curr++;
        }
        else
        {
            longest = max(longest, curr);
            curr = 1;
        }
    }
    cout << max(longest, curr);
    return 0;
}