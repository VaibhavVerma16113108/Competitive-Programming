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
	int n,x;
	cin >> n >> x;
	vector<int> coins(n);
	for(int i = 0; i < n; i++) {
		cin >> coins[i];
	}
	int dp[n+1][x+1];	// dp[i][x] = number of ordered ways to make sum = x using the first i coins
	for(int i = 0; i <= n; i++) {
		for(int j = 0; j <= x; j++) {
			dp[i][j] = 0;
		}
	}
	dp[0][0] = 1;
	for(int i = 1; i <= n; i++) {
		int coin = coins[i-1];
		for(int j = 0; j <= x; j++) {
			if(j >= coin) {
				dp[i][j] = (dp[i-1][j] + dp[i][j - coin]) % MODULO;
			}
			else {
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	// for(int i = 0; i <= n; i++) {
	// 	for(int j = 0; j <= x; j++) {
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	cout << dp[n][x];
	return 0;
}