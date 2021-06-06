#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	string s, t;
	cin >> s >> t;
	int m = s.size(), n = t.size();

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
			else if(s[i-1] == t[j-1]) {
				dp[i][j] = dp[i-1][j-1];
			}
			else {
				dp[i][j] = 1 + min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]));
			}
		}
	}

	cout << dp[m][n];
	return 0;
}