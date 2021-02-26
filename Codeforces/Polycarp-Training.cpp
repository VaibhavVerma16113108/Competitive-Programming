#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int ans = 0, curr = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= curr)
        {
            ans++;
            curr++;
        }
    }
    cout << ans;
    return 0;
}