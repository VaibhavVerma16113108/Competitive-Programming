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
        int steps = 0;
        // both even or both odd
        if (a % 2 == b % 2)
        {
            if (a < b)
            {
                // a + (b - a - 1) + 1 = b -> 2 steps
                steps = 2;
            }
            else if (a > b)
            {
                // a - (a - b) = b -> 1 step
                steps = 1;
            }
        }
        // a odd, b even or a even, b odd
        else
        {
            if (a < b)
            {
                // a + (b - a) = b -> 1 step
                steps = 1;
            }
            else if (a > b)
            {
                // a + 1 - (a - b + 1) -> 2 steps
                steps = 2;
            }
        }
        cout << steps << endl;
    }
    return 0;
}