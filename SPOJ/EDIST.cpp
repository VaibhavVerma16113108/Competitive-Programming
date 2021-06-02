#include<iostream>
#include<string>

using namespace std;
#define ll long long 
int main() {
	int t;
	cin >> t;
	while(t--) {
		string s1, s2;
		cin >> s1 >> s2;
		int m = s1.size(), n = s2.size();
		int dp[m+1][n+1];
		for(int i = 0; i <= m; i++) {
			for(int j = 0; j <= n; j++) {
				dp[i][j] = 0;
			}
		} 
		for(int i = 0; i <= m; i++) {
			for(int j = 0; j <= n; j++) {
				if(i == 0) {
                    dp[i][j] = j;
                }
                else if(j == 0) {
                    dp[i][j] = i;
                }
                else if(s1[i-1] == s2[j-1]) {
                    dp[i][j] = dp[i-1][j-1];
                }
                else {
                    dp[i][j] = 1 + min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]));
                }
			}
		}
        // for(int i = 1; i <= m; i++) {
        //     for(int j = 1; j <= n; j++) {
        //         cout << dp[i][j] << " ";
        //     }
        //     cout << endl;
        // }
		cout << dp[m][n] << endl;
	}
	
}
