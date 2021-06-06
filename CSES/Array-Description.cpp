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

	const ll MOD = 1e9 + 7;

	ll n, m;
	cin >> n >> m;
	vector<ll> arr(n+1);
	for(ll i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	ll dp[n+1][m+2];
	for(ll i = 0; i <= n; i++) {
		for(ll j = 0; j <= m+1; j++) {
			dp[i][j] = 0;
		}
	}
	if(arr[1] == 0) {
		for(ll i = 1; i <= m; i++) {
			dp[1][i] = 1;
		}
	}
	else {
		dp[1][arr[1]] = 1;
	}
	for(ll i = 2; i <= n; i++) {
		if(arr[i] == 0) {
			for(ll j = 1; j <= m; j++) {
				dp[i][j] = (dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1]) % MOD;
			}
		}
		else {
			dp[i][arr[i]] = (dp[i-1][arr[i]-1] + dp[i-1][arr[i]] + dp[i-1][arr[i]+1]) % MOD;
		}
	}
	if(arr[n] == 0) {
		ll sum = 0;
		for(ll i = 1; i <= m; i++) {
			sum = (sum + dp[n][i]) % MOD;
		}
		cout << sum;
	}
	else {
		cout << dp[n][arr[n]];
	}
	return 0;
}