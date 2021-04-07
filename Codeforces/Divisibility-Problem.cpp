#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a < b)
        {
            cout << b - a << endl;
        }
        else
        {
            int remainder = a % b;
            int ans = remainder == 0 ? remainder : b - remainder;
            cout << ans << endl;
        }
    }
    return 0;
}