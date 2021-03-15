#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // the idea is to make A and B as close to each other as possible, since only then A*B will be maximum. For this, we find the leftmost set bit in the binary representation of C, and set the corresponding bit of A. Now we set all the other bits of B corresponding to the set bits of C. Obviously, when a bit of C is unset, we make the corresponding bits of A and B 1 to maximise the numbers.
        ll c;
        cin >> c;
        ll p = 1;
        while (p <= c)
        {
            p = (p << 1);
        }
        int power = 0;
        while (p != 1)
        {
            p /= 2;
            power++;
        }
        string a(power, '1');
        string b(power, '1');
        int ptr = power - 1;
        int finalptr = ptr;
        while (c)
        {
            if (c & 1)
            {
                a[ptr] = '0';
                finalptr = ptr;
            }
            c = (c >> 1);
            ptr--;
        }
        a[finalptr] = '1';
        b[finalptr] = '0';
        ll n1 = stoi(a, 0, 2);
        ll n2 = stoi(b, 0, 2);
        ll ans = n1 * n2;
        cout << ans << endl;
    }
    return 0;
}