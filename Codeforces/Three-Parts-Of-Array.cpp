#include <iostream>
#include <vector>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll prefix_sum[n];
    ll suffix_sum[n];
    prefix_sum[0] = arr[0];
    suffix_sum[n - 1] = arr[n - 1];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        suffix_sum[i] = suffix_sum[i + 1] + arr[i];
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        auto it = lower_bound(suffix_sum, suffix_sum + n, prefix_sum[i], greater<int>()) - suffix_sum;
        // cout << "pos: " << it << " " << prefix_sum[i] << endl;
        if (it <= n - 1 and i < it and prefix_sum[i] == suffix_sum[it])
        {
            ans = prefix_sum[i];
        }
    }
    cout << ans;
    return 0;
}