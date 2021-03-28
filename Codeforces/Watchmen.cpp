#include <iostream>
#include <vector>
#include <map>
#include <utility>
using namespace std;
#define ll long long
ll count_pairs(map<ll, ll> posX, map<ll, ll> posY, map<pair<ll, ll>, ll> posXY)
{
    ll num_pairs = 0;
    for (auto pr : posX)
    {
        ll temp = pr.second;
        num_pairs += temp * (temp - 1) / 2;
    }
    for (auto pr : posY)
    {
        ll temp = pr.second;
        num_pairs += temp * (temp - 1) / 2;
    }
    for (auto pr : posXY)
    {
        ll temp = pr.second;
        num_pairs -= temp * (temp - 1) / 2;
    }
    return num_pairs;
}

int main()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> coords;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        coords.push_back({x, y});
    }
    map<ll, ll> posX;
    map<ll, ll> posY;
    map<pair<ll, ll>, ll> posXY;
    for (auto pr : coords)
    {
        posX[pr.first]++;
        posY[pr.second]++;
        posXY[pr]++;
    }
    cout << count_pairs(posX, posY, posXY);
    return 0;
}