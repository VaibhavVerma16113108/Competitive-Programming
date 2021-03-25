#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int w[n];
    int h[n];
    int sum_widths = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> w[i] >> h[i];
        sum_widths += w[i];
    }
    int max_height = 0;
    int second_max_height = 0;
    for (int i = 0; i < n; i++)
    {
        if (h[i] > max_height)
        {
            second_max_height = max_height;
            max_height = h[i];
        }
        else if (h[i] > second_max_height)
        {
            second_max_height = h[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int curr_width = sum_widths - w[i];
        int curr_height = h[i] == max_height ? second_max_height : max_height;
        cout << curr_height * curr_width << " ";
    }
    return 0;
}