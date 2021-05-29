class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        long long dp[m+1][n+1];
        dp[m][n] = obstacleGrid[m-1][n-1] ^ 1;

        for(int i = m-1; i >= 1; i--) {
            if(dp[i+1][n] == 0 or obstacleGrid[i-1][n-1] == 1) {
                dp[i][n] = 0;
            }
            else {
                dp[i][n] = 1;
            }
        }
        for(int i = n-1; i >= 1; i--) {
            if(dp[m][i+1] == 0 or obstacleGrid[m-1][i-1] == 1) {
                dp[m][i] = 0;
            }
            else {
                dp[m][i] = 1;
            }
        }
        for(int i = m-1; i >= 1; i--) {
            for(int j = n-1; j >= 1; j--) {
                if(obstacleGrid[i-1][j-1] == 1) {
                    dp[i][j] = 0;
                }
                else {
                    dp[i][j] = dp[i+1][j] + dp[i][j+1];
                }
            }
        }
        return dp[1][1];
    }
};