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
	int n;
	cin >> n;
	int dp[n+1];
	dp[0] = 0;
	for(int i = 1; i <= n; i++) {
		dp[i] = INF;
	}
	for(int num = 1; num <= n; num++) {
		int temp = num;
		while(temp) {
			int digit = temp % 10;
			temp /= 10;
			if(digit == 0) {
				continue;
			}
			else {
				dp[num] = min(dp[num], 1 + dp[num - digit]);
			}
		}
	}
	cout << dp[n];
	return 0;
}