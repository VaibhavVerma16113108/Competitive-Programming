#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n - 1];
    int exor = 0;
    for (int i = 1; i <= n; i++)
        exor ^= i;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        exor ^= arr[i];
    }
    cout << exor;
    return 0;
}