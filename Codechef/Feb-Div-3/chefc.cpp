#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        ll maximum = -1e18;
        for (int i = 0; i < n - 1; i++)
        {
            ll curr = a[n - 1] * a[i] + a[n - 1] - a[i];
            maximum = max(maximum, curr);
        }
        for (int i = 1; i < n; i++)
        {
            ll curr = a[0] * a[i] + a[i] - a[0];
            maximum = max(maximum, curr);
        }
        cout << maximum << endl;
    }
    return 0;
}