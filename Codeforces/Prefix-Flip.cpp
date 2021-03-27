#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string a, b;
        vector<int> v;
        cin >> n >> a >> b;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                v.push_back(i + 1);
                v.push_back(1);
                v.push_back(i + 1);
            }
        }
        cout << v.size() << " ";
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}