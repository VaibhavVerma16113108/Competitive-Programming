// Reference of Algorithm: https://www.geeksforgeeks.org/generate-n-bit-gray-codes/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> l1 = {"0", "1"};
    vector<string> l2 = l1;
    reverse(l2.begin(), l2.end());
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < l1.size(); j++)
        {
            l1[j] = "0" + l1[j];
        }
        for (int j = 0; j < l2.size(); j++)
        {
            l2[j] = "1" + l2[j];
        }
        l1.insert(l1.end(), l2.begin(), l2.end());
        l2 = l1;
        reverse(l2.begin(), l2.end());
    }
    for (auto s : l1)
        cout << s << endl;
    return 0;
}