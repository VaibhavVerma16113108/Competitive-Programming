#include <iostream>
#include <vector>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll sum = n * (n + 1) / 2;
    if (sum % 2)
        cout << "NO";
    else
    {
        sum /= 2;
        cout << "YES" << endl;
        if (sum % n == 0)
        {
            ll sizeA = 2 * (sum / n - 1) + 1;
            cout << sizeA << endl;
            cout << n << " ";
            for (int i = 1; i < sum / n; i++)
            {
                cout << i << " " << n - i << " ";
            }
            cout << endl;
            cout << n - sizeA << endl;
            for (int i = sum / n; i < n - i; i++)
            {
                cout << i << " " << n - i << " ";
            }
        }
        else
        {
            ll sizeA = 2 * sum / (n + 1);
            cout << sizeA << endl;
            for (int i = 1; i <= sizeA / 2; i++)
            {
                cout << i << " " << n - i + 1 << " ";
            }
            cout << endl;
            cout << n - sizeA << endl;
            for (int i = sizeA / 2 + 1; i <= n - i; i++)
            {
                cout << i << " " << n - i + 1 << " ";
            }
        }
    }
    return 0;
}