#include <iostream>
#include <vector>
using namespace std;
#define ll long long

ll countKnights(ll k)
{
    // k = board size
    ll ans = k * k * (k * k - 1) / 2 - 4 * (k - 2) * (k - 1);
    return ans;
}
int main()
{
    ll n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << countKnights(i) << endl;
    }
    return 0;
}