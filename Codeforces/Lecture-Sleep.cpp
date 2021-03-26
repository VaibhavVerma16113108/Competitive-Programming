#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int res = 0;
    int awake[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> awake[i];
        if (awake[i])
        {
            res += arr[i];
            arr[i] = 0;
        }
    }
    int max_prefix = 0, curr_prefix = 0;
    for (int i = 0; i < k; i++)
    {
        curr_prefix += arr[i];
    }
    max_prefix = curr_prefix;
    for (int i = k; i < n; i++)
    {
        curr_prefix = curr_prefix + arr[i] - arr[i - k];
        max_prefix = max(curr_prefix, max_prefix);
    }
    cout << res + max_prefix;
    return 0;
}