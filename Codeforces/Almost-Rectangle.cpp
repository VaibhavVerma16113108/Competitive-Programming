#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char board[n][n];
        vector<int> coords;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> board[i][j];
                if (board[i][j] == '*')
                {
                    int x = i, y = j;
                    coords.push_back(i);
                    coords.push_back(j);
                }
            }
        }
        int x1 = coords[0], y1 = coords[1];
        int x2 = coords[2], y2 = coords[3];
        int length = abs(x2 - x1), width = abs(y2 - y1);
        // cout << "Dimensions are: " << length << " " << width << endl;
        if (x1 == x2)
        {
            int x3 = x1 + 1, y3 = y1;
            int x4 = x2 + 1, y4 = y2;
            if (x3 >= n)
            {
                x3 -= 2;
                x4 -= 2;
            }
            board[x3][y3] = '*';
            board[x4][y4] = '*';
            // cout << "Point 3: " << x3 << " " << y3 << endl;
            // cout << "Point 4: " << x4 << " " << y4 << endl;
        }
        else if (y1 == y2)
        {
            int x3 = x1, y3 = y1 + 1;
            int x4 = x2, y4 = y2 + 1;
            if (y3 >= n)
            {
                y3 -= 2;
                y4 -= 2;
            }
            board[x3][y3] = '*';
            board[x4][y4] = '*';
            // cout << "Point 3: " << x3 << " " << y3 << endl;
            // cout << "Point 4: " << x4 << " " << y4 << endl;
        }
        else
        {
            int x3 = x1, y3 = y2;
            int x4 = x2, y4 = y1;
            board[x3][y3] = '*';
            board[x4][y4] = '*';
            // cout << "Point 3: " << x3 << " " << y3 << endl;
            // cout << "Point 4: " << x4 << " " << y4 << endl;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << board[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}