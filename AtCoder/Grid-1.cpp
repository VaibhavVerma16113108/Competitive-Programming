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
	int h, w;
	cin >> h >> w;
	char path[h+1][w+1];
	for(int i = 1; i <= h; i++) {
		for(int j = 1; j <= w; j++) {
			cin >> path[i][j];
		}
	}
	int dp[h+1][w+1];
	for(int i = 0; i <= w; i++) {
		dp[h][i] = 0;
	}
	for(int i = 0; i <= h; i++) {
		dp[i][w] = 0;
	}
	dp[h-1][w-1] = 1;
	for(int i = w-2; i >= 0; i--) {
		if(path[h][i+1] == '#') {
			dp[h-1][i] = 0;
		}
		else {
			dp[h-1][i] = (dp[h][i] + dp[h-1][i+1]) % MODULO;
		}
	}
	for(int i = h-1; i >= 1; i--) {
		for(int j = w-1; j >= 0; j--) {
			if(path[i][j+1] == '#') {
				dp[i-1][j] = 0;
			}
			else {
				dp[i-1][j] = (dp[i][j] + dp[i-1][j+1]) % MODULO;
			}
		}
	}
	// for(int i = 0; i <= h; i++) {
	// 	for(int j = 0; j <= w; j++) {
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	cout << dp[0][0];
	return 0;
}