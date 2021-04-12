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
        int n;
        cin >> n;
        ll b[n + 2];
        for (int i = 0; i < n + 2; i++)
        {
            cin >> b[i];
        }
        sort(b, b + n + 2);
        // two cases: 1) either the last element is the sum or the second last element is the sum
        // case 1
        ll sum_of_original = b[n + 1];
        ll curr_sum = 0;
        for (int i = 0; i < n; i++)
        {
            curr_sum += b[i];
        }
        int arr[n];
        if (curr_sum == sum_of_original or curr_sum == b[n])
        {
            for (int i = 0; i < n; i++)
            {
                arr[i] = b[i];
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else
        {
            int idx = -1;
            for (int i = 0; i < n; i++)
            {
                ll temp = curr_sum + b[n] - b[i];
                // cout << "Current sum: " << temp << endl;
                if (temp == sum_of_original)
                {
                    idx = i;
                    break;
                }
            }
            if (idx == -1)
            {
                cout << idx << endl;
                continue;
            }
            int j = 0;
            for (int i = 0; i < n + 1; i++)
            {
                if (i == idx)
                    continue;
                arr[j] = b[i];
                j++;
            }
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}