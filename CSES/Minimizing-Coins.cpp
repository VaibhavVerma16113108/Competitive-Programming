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

	const int INF = 1e9;
	int n, x;
	cin >> n >> x;
	vector<int> coins(n);
	for(int i = 0; i < n; i++) {
		cin >> coins[i];
	}
	int dp[x+1];
	dp[0] = 0;
	for(int i = 1; i <= x; i++) {
		dp[i] = INF;
	}
	for(int i = 1; i <= x; i++) {
		for(int coin: coins) {
			if(i >= coin) {
				dp[i] = min(dp[i], dp[i-coin] + 1);
			}
		}
	}
	// for(int i = 1; i <= x; i++) {
	// 	cout << dp[i] << " ";
	// }
	if(dp[x] == INF) {
		cout << -1;
	}
	else {
		cout << dp[x];
	}
	return 0;
}