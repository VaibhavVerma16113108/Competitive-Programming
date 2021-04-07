#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<ll> c(n);
    for (ll i = 0; i < n; i++)
    {
        c[i] = a[i] - b[i];
    }
    sort(c.begin(), c.end());
    ll good_pairs = 0;
    for (ll i = 0; i < n; i++)
    {
        if (c[i] <= 0)
            continue;
        else
        {
            ll idx = upper_bound(c.begin(), c.end(), -c[i]) - c.begin();
            good_pairs += (i - idx);
        }
    }
    cout << good_pairs;
    return 0;
}