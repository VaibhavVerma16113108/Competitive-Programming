#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 5];
    int b[n + 5];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int pos[n + 5];
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
        pos[b[i]] = i;
    }
    int exit_times[n + 5];
    for (int i = 1; i <= n; i++)
    {
        exit_times[i] = pos[a[i]];
    }

    int cnt = 0, running_max = 0;
    for (int i = 1; i <= n; i++)
    {
        if (exit_times[i] < running_max)
        {
            cnt++;
        }
        running_max = max(running_max, exit_times[i]);
    }
    cout << cnt;
    return 0;
}