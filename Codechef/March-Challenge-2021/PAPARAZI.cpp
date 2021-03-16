#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
#define ll long long
ll orientation(pair<ll, ll> a, pair<ll, ll> b, pair<ll, ll> c)
{
    ll temp = (b.second - a.second) * (c.first - b.first) - (c.second - b.second) * (b.first - a.first);
    if (temp == 0)
        return 0;             // points are collinear
    return temp > 0 ? 1 : -1; // clockwise and anticlockwise respectively
}

stack<pair<ll, ll>> graham_scan(vector<ll> v, ll n)
{
    stack<pair<ll, ll>> s;
    pair<ll, ll> temp1(1, v[1]);
    pair<ll, ll> temp2(2, v[2]);
    s.push(temp1);
    s.push(temp2);
    for (ll i = 3; i <= n; i++)
    {
        if (s.size() >= 2)
        {
            while (s.size() >= 2)
            {
                pair<ll, ll> p2 = s.top();
                s.pop();
                pair<ll, ll> p1 = s.top();
                pair<ll, ll> p3(i, v[i]);
                if (orientation(p1, p2, p3) > 0)
                {
                    s.push(p2);
                    break;
                }
            }
            pair<ll, ll> p3(i, v[i]);
            s.push(p3);
        }
    }
    return s;
}

ll solve(stack<pair<ll, ll>> s)
{
    ll ans = 1;
    while (s.size() >= 2)
    {
        pair<ll, ll> p2 = s.top();
        s.pop();

        pair<ll, ll> p1 = s.top();
        ans = max(ans, p2.first - p1.first);
    }
    return ans;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n + 1);
        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        cout << solve(graham_scan(arr, n)) << endl;
    }
    return 0;
}