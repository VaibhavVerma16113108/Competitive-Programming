#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> left(26, -1);
    vector<int> right(26, -1);
    for (int i = 0; i < n; i++)
    {
        int curr = s[i] - 'A';
        if (left[curr] == -1)
        {
            left[curr] = i;
        }
        right[curr] = i;
    }
    int current_active_letters = 0, max_active_letters = 0;
    for (int i = 0; i < n; i++)
    {
        int curr = s[i] - 'A';
        if (left[curr] == i)
        {
            current_active_letters++;
        }
        max_active_letters = max(max_active_letters, current_active_letters);
        if (right[curr] == i)
        {
            current_active_letters--;
        }
    }
    if (max_active_letters <= k)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}