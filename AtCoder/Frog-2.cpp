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
	int n,k;
	cin >> n >> k;
	int heights[n+1];
	for(int i = 1; i <= n; i++) {
		cin >> heights[i];
	}
	int dp[n+1];
	dp[n] = 0;
	for(int i = n-1; i >= 1; i--) {
		int val = INF;
		for(int j = 1; j <= min(n - i, k); j++) {
			val = min(val, abs(heights[i] - heights[i + j]) + dp[i + j]);
		}
		dp[i] = val;
	}
	cout << dp[1] << endl;
	return 0;
}