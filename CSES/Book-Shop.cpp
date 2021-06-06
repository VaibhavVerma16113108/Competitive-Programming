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

	int n, x;
	cin >> n >> x;
	vector<int> prices(n+1);
	vector<int> pages(n+1);
	for(int i = 1; i <= n; i++) {
		cin >> prices[i];
	}
	for(int i = 1; i <= n; i++) {
		cin >> pages[i];
	}

	int dp[n+1][x+1]; 
	
	for(int i = 0; i <= n; i++) {
		for(int j = 0; j <= x; j++) {
			dp[i][j] = 0;
		}
	}
	for(int i = 1; i <= n; i++) {
		int currBookPages = pages[i];
		int currBookPrice = prices[i];
		for(int j = 1; j <= x; j++) {
			if(j < currBookPrice) {
				dp[i][j] = dp[i-1][j];
			}
			else {
				dp[i][j] = max(dp[i-1][j - currBookPrice] + currBookPages, dp[i-1][j]);
			}
		}
	}
	cout << dp[n][x];
	return 0;
}