#include <iostream>
#include <vector>
using namespace std;

int f(int x)
{
    x = x + 1;
    while (x % 10 == 0)
    {
        x = x / 10;
    }
    return x;
}
int count_reachable(int n)
{
    if (n / 10 == 0)
    {
        return 9;
    }
    else
    {
        int count = 0;
        while (n / 10 != 0)
        {
            n = f(n);
            count++;
        }
        return count + 9;
    }
}
int main()
{
    int n;
    cin >> n;
    cout << count_reachable(n);
    return 0;
}