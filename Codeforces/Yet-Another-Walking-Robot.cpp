#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
bool comp(pair<int, int> a, pair<int, int> b)
{
    return a.second - a.first < b.second - b.first;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<pair<int, int>> st;
        map<pair<int, int>, int> mp;
        pair<int, int> origin = {0, 0};
        mp[origin] = 0;
        st.insert(origin);
        int posX = 0, posY = 0;
        bool ok = false;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            char ch = s[i];
            if (ch == 'L')
            {
                posX--;
            }
            else if (ch == 'R')
            {
                posX++;
            }
            else if (ch == 'U')
            {
                posY++;
            }
            else
            {
                posY--;
            }
            pair<int, int> current_pos(posX, posY);
            if (st.count(current_pos))
            {
                if (mp.count(current_pos))
                {
                    v.push_back({mp[current_pos] + 1, i + 1});
                    ok = true;
                }
            }
            st.insert(current_pos);
            mp[current_pos] = i + 1;
        }
        if (!ok)
            cout << -1 << endl;
        else
        {
            sort(v.begin(), v.end(), comp);
            cout << v[0].first << " " << v[0].second << endl;
        }
    }
    return 0;
}