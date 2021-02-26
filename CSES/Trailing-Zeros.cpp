#include <iostream>
#include <vector>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    ll ans = 0, p = 5;
    while (p <= n)
    {
        ans += (n / p);
        p *= 5;
    }
    cout << ans;
    return 0;
}