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
		vector<int> nums(n + 1);
		for(int i = 1; i <= n; i++) {
			cin >> nums[i];
		}
		bool dp[n+1][k+1]; 	// dp[i][j] = true if first i values sum up to j.
		// initialisation
		dp[0][0] = true; // you can make sum = 0 using 0 elements.
		for(int i = 1; i <= k; i++) {
			dp[0][i] = false;
		}
		// ------------------------- //
		for(int i = 1; i <= n; i++) {
			for(int j = 0; j <= k; j++) {
				// if column is lesser than number in the array, just copy the above row of the dp array.
				if(j < nums[i]) {
					dp[i][j] = dp[i-1][j];
				}
				// otherwise, if it is possible to get required sum = j with i-1 elements then it is also possible to get sum = j with i elements. Additionally, if j - nums[i] can be achieved with the first i-1 numbers, then j can be achieved with the first i numbers.
				else {
					int req = j - nums[i];
					dp[i][j] = (dp[i-1][j] || dp[i-1][req]);
				}
			}
		}
		if(dp[n][k]) {
			cout << 1 << endl;
		} 
		else {
			cout << 0 << endl;
		}
	}
	return 0;
}