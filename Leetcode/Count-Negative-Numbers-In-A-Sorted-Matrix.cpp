class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int cnt = 0;
        for (auto row : grid)
        {
            auto it = lower_bound(row.begin(), row.end(), -1, greater<int>());
            if (it != row.end() && *it < 0)
            {
                cnt += row.end() - it;
            }
        }
        return cnt;
    }
};