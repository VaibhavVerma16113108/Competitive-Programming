#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long
int main()
{
    ll n, rooks;
    cin >> n >> rooks;
    set<int> rows;
    set<int> cols;
    ll free_cells = n * n;
    while (rooks--)
    {
        int row, col;
        cin >> row >> col;
        rows.insert(row);
        cols.insert(col);
        ll row_size = rows.size();
        ll col_size = cols.size();
        ll cnt = row_size * n + col_size * n - row_size * col_size;
        cout << free_cells - cnt << " ";
    }
    return 0;
}