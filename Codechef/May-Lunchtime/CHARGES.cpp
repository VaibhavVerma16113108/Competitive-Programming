#include<iostream>
#include<vector>
#include<set>
#include<string>
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
		string s;
		cin >> s;
		int q[k+1];
		for(int i = 1; i <= k; i++) {
			q[i] = 0;
		}
		for(int i = 1; i <= k; i++) {
			cin >> q[i];
		}
		int dist = 0;
		for(int i = 1; i < s.size(); i++) {
			if(s[i] != s[i-1]) {
				dist++;
			}
			else {
				dist += 2;
			}
		}
		for(int i = 1; i <= k; i++) {
			if(q[i] == 1) {
				if(s[q[i]-1] == '1' and s[q[i]] == '0' or s[q[i]-1] == '0' and s[q[i]] == '1') {
					dist++;
				}
				else {
					dist--;
				}
			}
			else if(q[i] == s.size()) {
				if(s[q[i]-2] == '1' and s[q[i]-1] == '0' or s[q[i]-2] == '0' and s[q[i]-1] == '1') {
					dist++;
				}
				else {
					dist--;
				}
			}
			else {
				char left = s[q[i]-2];
				char right = s[q[i]];
				char middle = s[q[i]-1];
				if(left == middle and left == right) {
					dist = dist - 2;
				}
				else if(left == right and left != middle) {
					dist = dist + 2;
				}
			}
			if(s[q[i]-1] == '0') {
					s[q[i]-1] = '1';
			}
			else {
				s[q[i]-1] = '0';
			}
			if(n == 1) {
				cout << 0 << endl;
			}
			else {
				cout << dist << endl;
			}
		}
	}
	return 0;
}