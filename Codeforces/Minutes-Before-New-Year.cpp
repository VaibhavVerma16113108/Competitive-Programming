#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, m;
        cin >> h >> m;
        int total = (60 - m) + (24 - h - 1) * 60;
        cout << total << endl;
    }
    return 0;
}