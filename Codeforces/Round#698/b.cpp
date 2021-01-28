#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int q, d;
        cin >> q >> d;
        int a[q];
        for (int i = 0; i < q; i++)
            cin >> a[i];
        for (int i = 0; i < q; i++)
        {
            if (a[i] % 10 == d || a[i] >= 10 * d)
            {
                cout << "YES" << endl;
            }
            else
            {
                bool ok = false;
                for (int j = 0; j < d; j++)
                {
                    if ((a[i] - 10 * j - d) >= 0 && (a[i] - 10 * j - d) % d == 0)
                    {
                        ok = true;
                        cout << "YES" << endl;
                        break;
                    }
                }
                if (!ok)
                    cout << "NO" << endl;
            }
        }
    }
    return 0;
}