#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int maximum = 1, current = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] >= v[i - 1])
        {
            current++;
            maximum = max(maximum, current);
        }
        else
        {
            current = 1;
        }
    }
    cout << maximum;
    return 0;
}