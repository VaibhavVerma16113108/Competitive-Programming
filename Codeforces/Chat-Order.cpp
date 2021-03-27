#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<string> stk;
    stack<string> helper;
    set<string> users;
    while (n--)
    {
        string s;
        cin >> s;
        stk.push(s);
    }
    while (!stk.empty())
    {
        if (!users.count(stk.top()))
        {
            cout << stk.top() << endl;
        }
        users.insert(stk.top());
        stk.pop();
    }
    return 0;
}