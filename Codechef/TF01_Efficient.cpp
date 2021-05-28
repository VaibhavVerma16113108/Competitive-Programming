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

	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		vector<int> nums(n+1);
		for(int i = 1; i <= n; i++) {
			cin >> nums[i];
		}

		bool dp[k+1];
		for(int i = 0; i <= k; i++) {
			dp[i] = 0;
		}
		dp[0] = 1;
		for(int i = 1; i <= n; i++) {
			int curr_el = nums[i];
			for(int j = k; j >= curr_el; j--) {
				if(dp[j] or (dp[j - curr_el] == 0)) {
					continue;
				}
				else {
					dp[j] = 1;
				}
			}
				
		}
		cout << dp[k] << endl;
	}
	return 0;
}