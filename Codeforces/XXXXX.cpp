#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        int sum_array = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum_array += arr[i];
        }
        // cout << "Sum" << sum_array << endl;
        if (sum_array % x)
        {
            cout << n << endl;
            continue;
        }
        int i = 0, j = n - 1;
        while (i < n && arr[i] % x == 0)
        {
            i++;
        }
        while (j >= 0 && arr[j] % x == 0)
        {
            j--;
        }

        int l = i, r = j;
        // cout << "Left:" << l << " Right: " << r << endl;
        if (l > r)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << max(r, n - 1 - l) << endl;
        }
    }
    return 0;
}