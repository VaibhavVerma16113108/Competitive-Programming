#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string ans(n, 'a');
        ll m = (ceil(sqrt(8 * k + 1)) - 1) / 2;
        // m is the position of the first 'b' from the right
        ans[n - 1 - m] = 'b';
        k = k - m * (m - 1) / 2 - 1;
        // k is the position of the second 'b' from the right
        ans[n - 1 - k] = 'b';
        cout << ans << endl;
    }
    return 0;
}