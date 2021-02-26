#include <iostream>
#include <vector>
using namespace std;
#define ll long long
ll findNum(ll row, ll col)
{
    ll ans = 0;
    // if i is odd, (i-1)^2 + 1 <= x <= (i-1)^2 + i is in the ith row, and (i-1)^2 + i <= x <= i^2 is in the ith column.
    // if i is even, (i-1)^2 + 1 <= x <= (i-1)^2 + i is in the ith column, and (i-1)^2 + i <= x <= i^2 is in the ith row.

    // The above observation is not very useful though.
    ll base = max(row, col);
    if (base == row)
    {
        if (row % 2)
        {
            ans = (row - 1) * (row - 1) + col;
        }
        else
        {
            ans = row * row - col + 1;
        }
    }
    else
    {
        if (col % 2)
        {
            ans = col * col - row + 1;
        }
        else
        {
            ans = (col - 1) * (col - 1) + row;
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll row, col;
        cin >> row >> col;
        cout << findNum(row, col) << endl;
    }
    return 0;
}