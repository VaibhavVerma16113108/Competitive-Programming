#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        for (auto x : mp)
        {
            if (x.second == 1)
            {
                auto idx = find(arr, arr + n, x.first) - arr;
                cout << idx + 1 << endl;
                break;
            }
        }
    }
    return 0;
}