#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        if ((n + a + b + c) % 3)
        {
            cout << "NO" << endl;
        }
        else
        {
            int k = (n + a + b + c) / 3;
            if ((k - a) >= 0 and (k - b) >= 0 and (k - c) >= 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}