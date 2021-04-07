#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            int low = i, high = i;
            for (int j = n - 1; j >= 0; j--)
            {
                if (a[j] == a[i])
                {
                    high = j;
                    break;
                }
            }
            if (high - low >= 2)
            {
                cout << "YES" << endl;
                ok = false;
                break;
            }
        }
        if (ok)
            cout << "NO" << endl;
    }
    return 0;
}