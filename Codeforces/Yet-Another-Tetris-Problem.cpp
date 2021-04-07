#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int numOdds = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            numOdds += num % 2;
        }
        int numEvens = n - numOdds;
        if (numEvens and numOdds)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}