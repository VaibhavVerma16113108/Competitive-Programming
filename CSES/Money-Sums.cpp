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

	int n;
	cin >> n;
	vector<int> coins(n);
	int sum = 0;
	for(int i = 0; i < n; i++) {
		cin >> coins[i];
		sum += coins[i];
	}
	bool dp[n+1][sum+1];
	for(int i = 0; i <= n; i++) {
		for(int j = 0; j <= sum; j++) {
			dp[i][j] = false;
		}
	}

	for(int i = 1; i <= n; i++) {
		int coin = coins[i-1];
		for(int j = 1; j <= sum; j++) {
			if(j < coin) {
				dp[i][j] = dp[i-1][j];
			}
			else if(j == coin) {
				dp[i][coin] = true;
			}
			else {
				dp[i][j] = (dp[i-1][j] || dp[i-1][j-coin]);
			}
		}
	}
	int count = 0;
	vector<int> amounts;
	for(int j = 1; j <= sum; j++) {
		if(dp[n][j]) {
			count++;
			amounts.push_back(j);
		}
	}
	cout << count << endl;
	for(int amount: amounts) {
		cout << amount << " ";
	}
	return 0;
}