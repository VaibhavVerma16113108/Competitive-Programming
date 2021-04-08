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
        cin >> n;
        string x;
        cin >> x;
        string a(n, '1');
        string b(n, '1');
        bool found1 = false;
        for (int i = 0; i < n; i++)
        {
            if (found1)
            {
                b[i] = x[i];
                a[i] = '0';
            }
            else
            {
                if (x[i] == '1')
                {
                    b[i] = '0';
                    found1 = true;
                }
                else if (x[i] == '0')
                {
                    a[i] = '0';
                    b[i] = '0';
                }
            }
        }
        cout << a << endl;
        cout << b << endl;
    }
    return 0;
}