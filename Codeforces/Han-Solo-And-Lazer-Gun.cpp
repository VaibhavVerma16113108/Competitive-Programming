#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

bool isCollinear(pair<int, int> &p1, pair<int, int> &p2, pair<int, int> &p3)
{
    return (p3.second - p2.second) * (p2.first - p1.first) == (p2.second - p1.second) * (p3.first - p2.first);
}
int main()
{
    int n, x0, y0;
    cin >> n >> x0 >> y0;
    pair<int, int> origin(x0, y0);
    vector<pair<int, int>> points;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        points.push_back({x, y});
    }
    int shots = 0;
    for (auto i = points.begin(); i < points.end(); i++)
    {
        pair<int, int> temp(i->first, i->second);
        for (auto j = points.begin(); j < points.end(), j != i; j++)
        {
            pair<int, int> temp2(j->first, j->second);
            if (isCollinear(origin, temp, temp2))
            {
                points.erase(j);
            }
        }
        shots++;
    }
    cout << shots;
    return 0;
}