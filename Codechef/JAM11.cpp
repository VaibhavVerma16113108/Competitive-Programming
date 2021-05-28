// Staircase Problem

#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long

const int MAX = 100001;
const ll MODULO = 1e9 + 7;

ll dp[MAX];

void init() {
	dp[1] = 1;	// Ways: [1]
	dp[2] = 2;	// Ways: [1 1], [2]
	dp[3] = 4;	// Ways: [1 1 1], [1 2], [2 1], [3]
	for(int i = 4; i <= MAX; i++) {
		dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % MODULO;
	}
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	init();
	int t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		cout << dp[n] << endl;
	}
	return 0;
}