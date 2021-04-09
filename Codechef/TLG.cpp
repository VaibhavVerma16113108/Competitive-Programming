#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int rounds;
    cin >> rounds;
    int total_score_1 = 0, total_score_2 = 0;
    bool winner = true; // winner is True -> player 1 wins
    int max_lead = 0;
    for (int i = 0; i < rounds; i++)
    {
        int current_score_1, current_score_2;
        cin >> current_score_1 >> current_score_2;
        total_score_1 += current_score_1;
        total_score_2 += current_score_2;
        if (total_score_1 > total_score_2 and total_score_1 - total_score_2 > max_lead)
        {
            max_lead = total_score_1 - total_score_2;
            winner = true;
        }
        else if (total_score_1 < total_score_2 and total_score_2 - total_score_1 > max_lead)
        {
            max_lead = max(max_lead, total_score_2 - total_score_1);
            winner = false;
        }
    }
    if (winner)
    {
        cout << 1 << " ";
    }
    else
    {
        cout << 2 << " ";
    }
    cout << max_lead;
    return 0;
}