#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        set<int> s;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (s.count(arr[i]))
            {
                ok = false;
            }
            s.insert(arr[i]);
        }
        if (!ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}