#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    set<string> a;
    set<string> b;
    set<string> both;
    string temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a.insert(temp);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        b.insert(temp);
        if (a.count(temp))
        {
            both.insert(temp);
        }
    }
    n -= both.size();
    m -= both.size();
    if (both.size() & 1)
        n++;
    if (n > m)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}