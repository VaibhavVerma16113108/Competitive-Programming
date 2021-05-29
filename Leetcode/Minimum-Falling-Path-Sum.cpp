class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        const int INF = 1e9;
        int dp[n][n+2];
        
        for(int i = 0; i < n; i++) {
        	dp[i][0] = INF;
        	dp[i][n+1] = INF;
        }
        for(int i = 1; i <= n; i++) {
        	dp[n-1][i] = matrix[n-1][i-1];
        }
        for(int row = n-2; row >= 0; row--) {
        	for(int col = 1; col <= n; col++) {
        		dp[row][col] = matrix[row][col-1] + min(dp[row+1][col-1], min(dp[row+1][col], dp[row+1][col+1]));
        	}
        }
        
        int minimum = INF;
        for(int i = 1; i <= n; i++) {
        	minimum = min(minimum, dp[0][i]);
        }
        return minimum;
    }
};