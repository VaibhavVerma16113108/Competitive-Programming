#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll d[2 * n];
        bool ok = true;
        set<ll> s;
        map<ll, ll> mp;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> d[i];
            mp[d[i]]++;
        }
        for (auto x : mp)
        {
            if (x.second != 2)
            {
                ok = false;
                break;
            }
        }
        if (!ok)
        {
            cout << "NO" << endl;
            continue;
        }
        sort(d, d + 2 * n);
        for (int i = 0; i < 2 * n; i++)
            s.insert(d[i]);
        if (s.size() != n)
        {
            cout << "NO" << endl;
            continue;
        }
        vector<ll> v;
        for (ll i : s)
        {
            v.push_back(i);
        }
        if (v[n - 1] % (2 * n))
        {
            cout << "NO" << endl;
            continue;
        }
        ll sum = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            // cout << "Iteration:"
            //      << " " << n - i - 1;
            v[i] -= sum;
            if (v[i] > 0 and v[i] % (2 * (i + 1)) == 0)
            {
                v[i] /= 2 * (i + 1);
                sum += 2 * v[i];
            }
            else
            {
                ok = false;
                break;
            }
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}