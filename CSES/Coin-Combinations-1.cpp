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
	int n, x;
	cin >> n >> x;
	vector<int> coins(n);
	for(int i = 0; i < n; i++) {
		cin >> coins[i];
	}
	int dp[x+1];
	for(int i = 0; i <= x; i++) {
		dp[i] = 0;
	}
	for(int i = 1; i <= x; i++) {
		int ways = 0;
		for(int coin: coins) {
			if(i == coin) {
				ways++;
			}
			if(i >= coin) {
				ways = (ways + dp[i-coin]) % MODULO;
			}
		}
		dp[i] = ways;
	}
	// for(int i = 1; i <= x; i++) {
	// 	cout << dp[i] << " ";
	// }
	cout << dp[x];
	return 0;
}