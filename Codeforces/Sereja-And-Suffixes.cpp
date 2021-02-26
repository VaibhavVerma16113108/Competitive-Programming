#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    int helper[n];
    helper[n - 1] = 1;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    s.insert(arr[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        if (s.count(arr[i]))
        {
            helper[i] = helper[i + 1];
        }
        else
        {
            helper[i] = helper[i + 1] + 1;
            s.insert(arr[i]);
        }
    }
    while (m--)
    {
        int query;
        cin >> query;
        cout << helper[query - 1] << endl;
    }
    return 0;
}