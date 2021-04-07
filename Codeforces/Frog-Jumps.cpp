#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int max_diff(vector<int> v)
{
    int answer = 0;
    for (int i = 1; i < v.size(); i++)
    {
        answer = max(answer, v[i] - v[i - 1]);
    }
    return answer;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<int> pos_right;
        pos_right.push_back(-1);
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'R')
                pos_right.push_back(i);
        }
        pos_right.push_back(s.size());
        cout << max_diff(pos_right) << endl;
    }
    return 0;
}