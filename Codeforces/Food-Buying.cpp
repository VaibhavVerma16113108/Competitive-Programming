#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int burles;
        cin >> burles;
        int power = 1e9, ans = 0;
        while (burles)
        {
            while (burles < power)
                power /= 10;
            ans += power;
            burles = burles - power + power / 10;
        }
        cout << ans << endl;
    }
    return 0;
}