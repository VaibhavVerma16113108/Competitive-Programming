#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    bool first_wins = false;
    stack<char> stk;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (stk.empty())
        {
            stk.push(s[i]);
        }
        else
        {
            if (stk.top() == s[i])
            {
                stk.pop();
                first_wins = !first_wins;
            }
            else
            {
                stk.push(s[i]);
            }
        }
    }
    if (first_wins)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}