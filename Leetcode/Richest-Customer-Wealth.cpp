class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int answer = 0;
        for (int i = 0; i < accounts.size(); i++)
        {
            int current = 0;
            for (int j = 0; j < accounts[0].size(); j++)
            {
                current += accounts[i][j];
            }
            answer = max(answer, current);
        }
        return answer;
    }
};