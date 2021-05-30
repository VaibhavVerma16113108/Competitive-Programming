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
	int heights[n+1];
	for(int i = 1; i <= n; i++) {
		cin >> heights[i];
	}
	int dp[n+1];
	dp[n] = 0;
	dp[n-1] = abs(heights[n] - heights[n-1]);
	for(int i = n-2; i >= 1; i--) {
		dp[i] = min(abs(heights[i+1] - heights[i]) + dp[i+1], abs(heights[i+2] - heights[i]) + dp[i+2]);
	}
	cout << dp[1] << endl;
	return 0;
}