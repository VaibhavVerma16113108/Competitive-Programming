class Solution
{
    // 1. Count which rows and which columns appear odd number of times.
    // 2. The cells which are in the pos(i,j) such that row i % 2 != col j % 2 are the ones that will remain odd after the specified operations. This value is given by the return statement. (Cells in the position where rows and cols both are odd will be even, since sum of two odds is even)
public:
    int oddCells(int n, int m, vector<vector<int>> &indices)
    {
        vector<bool> oddRows(n, false), oddCols(m, false);
        for (auto indice : indices)
        {
            oddRows[indice[0]] = !oddRows[indice[0]];
            oddCols[indice[1]] = !oddCols[indice[1]];
        }
        int cntOddRows = 0, cntOddCols = 0;
        for (auto row : oddRows)
        {
            cntOddRows += row ? 1 : 0;
        }
        for (auto col : oddCols)
        {
            cntOddCols += col ? 1 : 0;
        }
        return (n - cntOddRows) * cntOddCols + (m - cntOddCols) * cntOddRows;
    }
};