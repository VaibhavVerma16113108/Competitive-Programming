#include <iostream>
#include <vector>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int seasons;
        cin >> seasons;
        ll intro_song[seasons];
        for (int i = 0; i < seasons; i++)
        {
            cin >> intro_song[i];
        }
        ll total = 0;
        for (int i = 0; i < seasons; i++)
        {
            int episodes;
            cin >> episodes;
            ll duration[episodes];
            for (int j = 0; j < episodes; j++)
            {
                cin >> duration[j];
                total += duration[j];
            }
            total -= intro_song[i] * (episodes - 1);
        }
        cout << total << endl;
    }
    return 0;
}