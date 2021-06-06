#include<iostream>
#include<vector>
#include<set>
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

	const int MODULO = 1e9 + 7;

	int n;
	cin >> n;

	char grid[n+1][n+1];
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cin >> grid[i][j];
		}
	}

	ll dp[n+1][n+1];
	dp[n][n] = (grid[n][n] == '*') ? 0 : 1;
	for(int j = n-1; j >= 1; j--) {
		if(grid[n][j] == '*') {
			dp[n][j] = 0;
		}
		else {
			dp[n][j] = dp[n][j+1];
		}
	}
	for(int j = n-1; j >= 1; j--) {
		if(grid[j][n] == '*') {
			dp[j][n] = 0;
		}
		else {
			dp[j][n] = dp[j+1][n];
		}
	}

	for(int i = n-1; i >= 1; i--) {
		for(int j = n-1; j >= 1; j--) {
			if(grid[i][j] == '*') {
				dp[i][j] = 0;
			}
			else {
				dp[i][j] = (dp[i][j+1] + dp[i+1][j]) % MODULO;
			}
		}
	}
	cout << dp[1][1];
	return 0;
}