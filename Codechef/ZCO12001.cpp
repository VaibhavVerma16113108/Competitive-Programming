#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sequence[n];
    for (int i = 0; i < n; i++)
    {
        cin >> sequence[i];
    }

    int curr_depth = 0, first_idx = -1, max_nesting_depth = 0;
    bool idx_found = false;
    int max_symbols = 2, curr_symbols = 0, idx = 0;
    // let us first tackle the max nesting depth and the first index where it occurs
    for (int i = 0; i < n; i++)
    {
        if (sequence[i] == 1)
        {
            curr_depth++;
            if (curr_depth > max_nesting_depth)
            {
                max_nesting_depth = curr_depth;
                first_idx = i + 1;
            }
        }
        else
        {
            curr_depth--;
        }
        // Now let us find the maximum number of symbols between any pair of matched brackets, and the first position where this occurs
        if (curr_depth > 0)
        {
            curr_symbols++;
        }
        else
        {
            curr_symbols++;
            if (curr_symbols > max_symbols)
            {
                max_symbols = curr_symbols;
                idx = i - curr_symbols + 2;
            }
            curr_symbols = 0;
        }
    }
    cout << max_nesting_depth << " " << first_idx << " ";
    cout << max_symbols << " " << idx;
    return 0;
}