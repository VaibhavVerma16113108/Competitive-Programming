#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long

map<ll, ll> dp;

ll solve(ll n) {
	if(dp.find(n) != dp.end()) {
		return dp[n];
	}
	dp[n] = max(n, solve(n / 2) + solve(n / 3) + solve(n / 4));
	return dp[n];
}

void init() {
	dp[0] = 0; dp[1] = 1; dp[2] = 2; dp[3] = 3;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	init();
	ll n;
	while(cin >> n) {
		cout << solve(n) << endl;
	}
	return 0;
}