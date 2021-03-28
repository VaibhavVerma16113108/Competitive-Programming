#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
#define ll long long
int main()
{
    int n, k;
    cin >> n >> k;
    double arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    double total_sum = 0.0f, segment_sum = 0.0f;
    for (int i = 0; i < k; i++)
    {
        segment_sum += arr[i];
    }
    for (int i = k; i < n; i++)
    {
        total_sum += segment_sum;
        segment_sum = segment_sum + arr[i] - arr[i - k];
    }
    total_sum += segment_sum;
    cout << fixed << setprecision(6) << total_sum / (double)(n - k + 1);
    return 0;
}