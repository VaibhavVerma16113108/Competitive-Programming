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

	ll n, w;
	cin >> n >> w;
	vector<ll> weights(n);
	vector<ll> profits(n);
	for(ll i = 0; i < n; i++) {
		cin >> weights[i] >> profits[i];
	}
	ll dp[n+1][w+1];
	// if total weight is 0, we cannot pick any items -> profit = 0.
	for(ll i = 0; i <= n; i++) {
		dp[i][0] = 0;
	}
	for(ll j = 0; j <= w; j++) {
		dp[0][j] = 0;
	}
	for(ll i = 1; i <= n; i++) {
		for(ll j = 1; j <= w; j++) {
			if(j >= weights[i-1]) {
				dp[i][j] = max(dp[i-1][j], profits[i-1] + dp[i-1][j-weights[i-1]]);
			}
			else {
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	// for(int i = 0; i <= n; i++) {
	// 	for(int j = 0; j <= w; j++) {
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	
	cout << dp[n][w];
	return 0;
}