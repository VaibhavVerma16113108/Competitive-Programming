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
        vector<int> v(n);
        int count_odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            count_odd += v[i] % 2;
        }
        // if all are even, then answer is NO
        if (count_odd == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            // if length of array is odd and atleast one odd number is present
            if (n % 2)
            {
                cout << "YES" << endl;
            }
            else
            {
                // if all are odd then answer is NO
                if (count_odd == n)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
        }
    }
    return 0;
}