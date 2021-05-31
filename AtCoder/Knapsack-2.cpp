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

	const ll INF = 1e9;
	ll n, w;
	cin >> n >> w;
	vector<ll> weights(n+1);
	vector<ll> values(n+1);
	ll val_sum = 0;
	for(ll i = 1; i <= n; i++) {
		cin >> weights[i] >> values[i];
		val_sum += values[i];
	}
	
	ll dp[n+1][val_sum+1];
	for(ll i = 0; i <= n; i++) {
		dp[i][0] = 0;
	}
	for(ll i = 1; i <= val_sum; i++) {
		dp[0][i] = INF;
	}
	for(ll i = 1; i <= n; i++) {
		for(ll j = 1; j <= val_sum; j++) {
			if(j < values[i]) {
				dp[i][j] = dp[i-1][j];
			}
			else {
				dp[i][j] = min(dp[i-1][j], dp[i-1][j - values[i]] + weights[i]);
			}
		}
	}
	
	// for(ll i = 0; i <= n; i++) {
	// 	for(ll j = 0; j <= val_sum; j++) {
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	int ans = 0;
	for(int i = 0; i <= val_sum; i++) {
		if(dp[n][i] <= w) {
			ans = i;
		}
	}
	cout << ans;
	return 0;
}