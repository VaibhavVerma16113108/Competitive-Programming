#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> stk;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
            {
                stk.push(s[i]);
            }
            else
            {
                if (!stk.empty())
                {
                    stk.pop();
                }
                else
                {
                    stk.push(s[i]);
                }
            }
        }
        cout << stk.size() << endl;
    }
    return 0;
}