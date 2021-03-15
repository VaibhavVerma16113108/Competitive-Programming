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
        string s;
        cin >> s;
        int n = s.size();
        // find different groups of consecutive 1's
        int ans = 0, i = 0;
        while (i < n)
        {
            if (s[i] == '1')
            {
                while (i < n && s[i] == '1')
                {
                    i++;
                }
                ans++;
            }
            else
            {
                i++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}