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
	ll n;
	cin >> n;
	ll dp[n+1];
	dp[0] = 1;
	for(int i = 1; i <= n; i++) {
		ll ans = 0;
		for(int j = 1; j <= 6; j++) {
			if(i >= j) {
				ans = (ans + dp[i-j]) % MODULO;
			}
		}
		dp[i] = ans;
	}
	cout << dp[n];
	return 0;
}