#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    sort(arr1.begin(), arr1.end());
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < m; i++)
    {
        auto it = upper_bound(arr1.begin(), arr1.end(), arr2[i]) - arr1.begin();
        cout << it << " ";
    }

    return 0;
}