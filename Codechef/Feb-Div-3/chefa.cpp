#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, c;
        cin >> d >> c;
        int a[3];
        int b[3];
        int sum_a = 0, sum_b = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
            sum_a += a[i];
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> b[i];
            sum_b += b[i];
        }
        int costWithoutCoupon = sum_a + sum_b + 2 * d;
        int costWithCoupon = sum_a + sum_b + c + 2 * d;
        if (sum_a >= 150)
            costWithCoupon -= d;
        if (sum_b >= 150)
            costWithCoupon -= d;
        if (costWithCoupon < costWithoutCoupon)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}