#include<iostream>
#include<vector>
#include<string>
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

	string s, t;
	cin >> s >> t;

	int m = s.size(), n = t.size();
	int dp[m+1][n+1];
	for(int i = 0; i <= m; i++) {
		dp[i][0] = 0;
	}
	for(int j = 0; j <= n; j++) {
		dp[0][j] = 0;
	}

	for(int i = 1; i <= m; i++) {
		for(int j = 1; j <= n; j++) {
			if(s[i-1] == t[j-1]) {
				dp[i][j] = 1 + dp[i-1][j-1];
			}
			else {
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}
	// for(int i = 0; i <= m; i++) {
	// 	for(int j = 0; j <= n; j++) {
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	string ans = "";
	int ptr1 = m, ptr2 = n;
	while(ptr1 >= 1 and ptr2 >= 1) {
		if(dp[ptr1][ptr2] != max(dp[ptr1-1][ptr2], dp[ptr1][ptr2-1])) {
			ans = string(1, s[ptr1-1]) + ans;
			ptr1--;
			ptr2--;
		}
		else if(dp[ptr1][ptr2] == dp[ptr1-1][ptr2]) {
			ptr1--;
		}
		else {
			ptr2--;
		}
	}
	cout << ans;
	return 0;
}