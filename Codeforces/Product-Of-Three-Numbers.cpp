#include <iostream>
#include <vector>
#include <set>
using namespace std;

set<int> factorise(int n)
{
    set<int> factors;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            factors.insert(i);
            n /= i;
            break;
        }
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0 and factors.count(i) == 0)
        {
            factors.insert(i);
            n /= i;
            break;
        }
    }
    factors.insert(n);
    return factors;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> s(factorise(n));
        if (s.size() < 3)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int factor : s)
            {
                cout << factor << " ";
            }
            cout << endl;
        }
    }
    return 0;
}