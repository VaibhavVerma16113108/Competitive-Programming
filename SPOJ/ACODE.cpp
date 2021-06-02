#include<iostream>
#include<string>

using namespace std;
#define ll long long 
int main() {
	while(true) {
		string s;
		cin >> s;
        if(s == "0") {
            break;
        }
		int n = s.size();
		ll dp[n+2];
		for(int i = 0; i <= n+1; i++) 
			dp[i] = 0;
		dp[n] = dp[n+1] = 1;
        if(s[n-1] == '0') dp[n] = 0;
		for(int i = n-1; i >= 1; i--) {
            if(s[i-1] == '0') {
                dp[i] = 0;
                continue;
            }
			string temp = string(1, s[i-1]) + string(1, s[i]);
			if(temp >= "1" and temp <= "26") {
				dp[i] = dp[i+1] + dp[i+2]; 
			} 
            else {
                dp[i] = dp[i+1];
            }
		}
        // for(int i = 1; i <= n; i++) {
        //     cout << dp[i] << " ";
        // }
        // cout << endl;
		cout << dp[1] << endl;
	}
	
}
