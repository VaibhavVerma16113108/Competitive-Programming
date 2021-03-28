#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <utility>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> widths;
    for (int i = 1; i <= n; i++)
    {
        int width;
        cin >> width;
        widths.push_back({width, i});
    }
    string s;
    cin >> s;

    sort(widths.begin(), widths.end());
    stack<int> pos;
    int next = 0, ptr = 0;
    while (ptr < s.size())
    {
        if (s[ptr] == '0')
        {
            // introvert
            cout << widths[next].second << " ";
            pos.push(widths[next].second);
            next++;
        }
        else
        {
            //extrovert
            cout << pos.top() << " ";
            pos.pop();
        }
        ptr++;
    }
    return 0;
}