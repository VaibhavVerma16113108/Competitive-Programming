#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, h, x;
    cin >> n >> h >> x;
    vector<int> t(n);
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
        if (x + t[i] >= h)
        {
            ok = true;
        }
    }
    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}