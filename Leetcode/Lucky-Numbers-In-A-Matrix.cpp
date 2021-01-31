class Solution
{
public:
    vector<int> luckyNumbers(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        vector<int> rowMins;
        vector<int> colMaxs;
        int m = matrix.size(), n = matrix[0].size();
        for (int i = 0; i < m; i++)
        {
            int rowMin = matrix[i][0];
            for (int j = 1; j < n; j++)
            {
                rowMin = min(rowMin, matrix[i][j]);
            }
            rowMins.push_back(rowMin);
        }
        for (int j = 0; j < n; j++)
        {
            int colMax = matrix[0][j];
            for (int i = 1; i < m; i++)
            {
                colMax = max(colMax, matrix[i][j]);
            }
            colMaxs.push_back(colMax);
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == rowMins[i] && matrix[i][j] == colMaxs[j])
                {
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        return ans;
    }
};