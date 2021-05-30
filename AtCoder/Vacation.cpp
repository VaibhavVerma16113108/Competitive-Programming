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

	int n;
	cin >> n;
	int happiness[n+1][4];
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= 3; j++) {
			cin >> happiness[i][j];
		}
	}
	int dp[n+1][4];
	for(int j = 1; j <= 3; j++) {
		dp[1][j] = happiness[1][j];
	}
	for(int i = 2; i <= n; i++) {
		dp[i][1] = happiness[i][1] + max(dp[i-1][2], dp[i-1][3]);
		dp[i][2] = happiness[i][2] + max(dp[i-1][3], dp[i-1][1]);
		dp[i][3] = happiness[i][3] + max(dp[i-1][1], dp[i-1][2]);
	}
	int mx = 0;
	for(int j = 1; j <= 3; j++) {
		mx = max(mx, dp[n][j]);
	}
	cout << mx;
	return 0;
}