#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n + 5];
        ll arrSum = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            arrSum += arr[i];
        }
        ll totalSum = n * (n + 1) / 2;
        ll diff = totalSum - arrSum;
        sort(arr + 1, arr + n + 1);
        bool firstWins = true;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] > i)
            {
                firstWins = false;
                break;
            }
        }
        if (!firstWins || (diff % 2) == 0)
            cout << "Second" << endl;
        else
            cout << "First" << endl;
    }
    return 0;
}