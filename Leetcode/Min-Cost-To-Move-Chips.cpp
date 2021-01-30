class Solution
{
public:
    int minCostToMoveChips(vector<int> &position)
    {
        int n = position.size();
        int numOdds = 0;
        for (int i : position)
        {
            numOdds += (i % 2);
        }
        return std::min(numOdds, n - numOdds);
    }
};