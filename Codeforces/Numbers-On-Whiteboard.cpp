#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << 2 << endl;
        int arr[n + 5];
        for (int i = 1; i <= n; i++)
            arr[i] = i;
        for (int i = n - 1; i >= 1; i--)
        {
            cout << arr[i + 1] << " " << arr[i] << endl;
            arr[i] = (arr[i + 1] + arr[i] + 1) / 2;
        }
    }
    return 0;
}