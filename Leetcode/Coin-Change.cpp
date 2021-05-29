class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int dp[amount + 1];
        dp[0] = 0;
        int INF = 1e9;
        for(int i = 1; i <= amount; i++) {
            dp[i] = INF;
        }
        for(int i = 1; i <= amount; i++) {
            int ans = INF;
            for(int j = 0; j < coins.size(); j++) {
                if(i >= coins[j]) {
                    ans = min(ans, dp[i - coins[j]]);
                }
            }
            if(ans != INF) {
                dp[i] = ans + 1;
            }
            else {
                dp[i] = INF;
            }
        }
        if(dp[amount] == INF) return -1;
        return dp[amount];
    }
};