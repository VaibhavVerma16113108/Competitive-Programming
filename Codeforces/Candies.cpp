#include <iostream>
#include <vector>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        // n should be divisible by 3, 7, 15, ... 2^k - 1
        ll p = 4;
        for (int k = 2; p - 1 <= n; k++)
        {
            // cout << p - 1 << endl;
            if (n % (p - 1) == 0)
            {
                cout << n / (p - 1) << endl;
                break;
            }
            p *= 2;
        }
    }
    return 0;
}