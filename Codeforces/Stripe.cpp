#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum_array = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum_array += arr[i];
    }
    int pref_sum = 0;
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        pref_sum += arr[i];
        if (pref_sum == sum_array - pref_sum)
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}