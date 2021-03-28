#include <iostream>
#include <vector>
#include <set>
using namespace std;

int n, m;
vector<int> freq;
set<int> distinct;
void hold_round()
{
    for (int i = 1; i <= n; i++)
    {
        freq[i]--;
        if (freq[i] > 0)
        {
            distinct.insert(i);
        }
    }
}

int main()
{
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    freq.assign(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        freq[arr[i]]++;
        distinct.insert(arr[i]);
        if (distinct.size() == n)
        {
            cout << 1;
            distinct.clear();
            hold_round();
        }
        else
        {
            cout << 0;
        }
    }
    return 0;
}