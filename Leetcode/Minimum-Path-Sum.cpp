class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int INF = 1e9;

        int dp[m+1][n+1];
        for(int i = 0; i <= m; i++) {
            dp[i][n] = INF;
        }
        for(int i = 0; i <= n; i++) {
            dp[m][i] = INF;
        }
        dp[m-1][n] = dp[m][n-1] = 0;

        for(int i = m-1; i >= 0; i--) {
            for(int j = n-1; j >= 0; j--) {
                dp[i][j] = grid[i][j] + min(dp[i+1][j], dp[i][j+1]);
            }
        }
        return dp[0][0];
    }
};