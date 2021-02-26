#include <iostream>
#include <vector>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    const int MODULO = 1e9 + 7;
    // output 2^n modulo 1e9 + 7
    ll ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= 2;
        ans %= MODULO;
    }
    cout << ans;
    return 0;
}