#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<iomanip>
using namespace std;
#define ll long long

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin >> n;
	vector<double> prob(n);
	for(int i = 0; i < n; i++) {
		cin >> prob[i];
	}
	double dp[n+1][n+1];
	for(int i = 0; i <= n; i++) {
		dp[i][0] = 0.0;
	}
	double init = 1.0;
	for(int i = 1; i <= n; i++) {
		init = init * (1 - prob[i-1]);
		dp[0][i] = init;
	}
	dp[1][1] = prob[0];
	for(int j = 2; j <= n; j++) {
		dp[1][j] = dp[1][j-1] + prob[j-1]*dp[0][j-1];
	}
	for(int i = 2; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			dp[i][j] = (1-prob[j-1])*dp[i][j-1] + prob[j-1]*dp[i-1][j-1];
		}
	}
	// for(int i = 0; i <= n; i++) {
	// 	for(int j = 0; j <= n; j++) {
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	cout << fixed << setprecision(10) << dp[(n+1)/2][n];
	return 0;
}