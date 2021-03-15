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
        ll n, e, h, a, b, c;
        cin >> n >> e >> h >> a >> b >> c;
        ll minCost = 1e18;
        for (ll k = 0; k <= n; k++)
        {
            ll shakes = (h - k) / 3;
            ll omelettes = (e - k) / 2;
            ll x1 = (n - k) - shakes;
            ll y2 = (n - k) - omelettes;
            if (x1 * 2 + k > e || y2 * 3 + k > h)
                continue;
            ll curr1 = a * x1 + b * shakes + c * k;
            ll curr2 = a * omelettes + b * y2 + c * k;
            minCost = min(minCost, min(curr1, curr2));
        }
        if (minCost == 1e18)
            cout << -1 << endl;
        else
            cout << minCost << endl;
    }
    return 0;
}