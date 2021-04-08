#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int total_candies = (n / k) * k;
        int extra = n % k;
        total_candies += min(extra, k / 2);
        cout << total_candies << endl;
    }
    return 0;
}