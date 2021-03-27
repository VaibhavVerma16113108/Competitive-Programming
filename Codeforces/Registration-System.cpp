#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<string> st;
    map<string, int> mp;
    while (n--)
    {
        string s;
        cin >> s;
        if (st.count(s))
        {
            int i = mp[s];
            string temp = s + to_string(i);
            mp[s] = i + 1;
            cout << temp << endl;
        }
        else
        {
            st.insert(s);
            mp[s] = 1;
            cout << "OK" << endl;
        }
    }
    return 0;
}