#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, t, c;
    cin >> n >> t >> c;
    vector<int> v;
    v.push_back(-1);
    // remove groups which consist of arr[i] > t
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num > t)
        {
            v.push_back(i);
        }
    }
    v.push_back(n);
    long long ans = 0;
    for (int i = 1; i < int(v.size()); i++)
    {
        int diff = v[i] - v[i - 1] - 1;
        ans += max(0, diff - c + 1);
    }
    cout << ans;
    return 0;
}