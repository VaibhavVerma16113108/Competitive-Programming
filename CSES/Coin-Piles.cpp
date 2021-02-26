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
        ll a, b;
        cin >> a >> b;
        if ((a + b) % 3 != 0 || b > 2 * a || a > 2 * b)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}