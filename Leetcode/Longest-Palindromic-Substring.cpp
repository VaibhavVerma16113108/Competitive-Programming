class Solution {
public:
    string longestPalindrome(string s) {
        int size = s.size();
        int dp[size+1][size+1];

       	// initialise the dp array- fill row 0 and row 1 with all 1's
       	for(int i = 0; i <= 1; i++) {
       		for(int j = 0; j <= size; j++) {
       			dp[i][j] = 1;
       		}
       	}
        for(int i = 2; i <= size; i++) {
            for(int j = 0; j <= size; j++) {
                dp[i][j] = 0;
            }
        }

        for(int i = 2; i <= size; i++) {
        	for(int j = i; j <= size; j++) {
        		if(s[j-i] == s[j-1] and dp[i-2][j-1] == 1) {
        			dp[i][j] = 1;
        		}
        	}
        }
        
        for(int i = size; i >= 1; i--) {
        	for(int j = size; j >= i; j--) {
        		if(dp[i][j] == 1) {
        			return s.substr(j - i, i);
        		}
        	}
        }
        return s;
    }
};