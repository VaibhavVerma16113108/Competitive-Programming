#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long

map<char, int> mp;

void init() {
	mp['a'] = 0;
	mp['e'] = 1;
	mp['i'] = 2;
	mp['o'] = 3;
	mp['u'] = 4;
}

void process_string(string s, int freq[]) {
	int mask = 0;
	for(char ch: s) {
		mask = (mask | (1 << mp[ch]));
	}
	freq[mask]++;
}

ll calc_meals(int freq[]) {
	ll ans = 0;
	for(int i = 0; i < 32; i++) {
		for(int j = i + 1; j < 32; j++) {
			if((i | j) == 31) {
				ans += freq[i] * freq[j];
			}
		}
	}
	ans += freq[31] * (freq[31] - 1) / 2;
	return ans;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	init();
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int freq[32] = {0};
		for(int i = 0; i < n; i++) {
			string s;
			cin >> s;
			process_string(s, freq);
		}
		cout << calc_meals(freq) << endl;
	}
	return 0;
}