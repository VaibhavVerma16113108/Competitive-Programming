#include <iostream>
#include <vector>
using namespace std;

int pos_of_max(vector<int> arr, int end)
{
    int max_element = 0, idx = 0;
    for (int i = 0; i < end; i++)
    {
        if (arr[i] > max_element)
        {
            max_element = arr[i];
            idx = i;
        }
    }
    return idx;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int end = n;
        vector<int> ans;
        while (end > 0)
        {
            int k = pos_of_max(arr, end);
            for (int i = k; i < end; i++)
            {
                ans.push_back(arr[i]);
            }
            end = k;
        }
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}