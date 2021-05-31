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

	int n, k;
	cin >> n >> k;
	vector<int> nums(n);
	for(int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	int dp[k+1];
	for(int i = 0; i <= k; i++) {
		dp[i] = 0;
	}
	// 0 = second, 1 = first
	for(int num: nums) {
		// first player wins if starting number k belongs to set A.
		dp[num] = 1;
	}
	for(int i = 1; i <= k; i++) {
		for(int num: nums) {
			if(i >= num) {
				dp[i] = (dp[i] or (dp[i - num] ^ 1));
			}
		}
	}
	// for(int i = 0; i <= k; i++) {
	// 	cout << dp[i] << " ";
	// }
	if(dp[k]) {
		cout << "First";
	}
	else {
		cout << "Second";
	}
	return 0;
}