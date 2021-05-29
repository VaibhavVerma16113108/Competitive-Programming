#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long

const int MAX = 1e6 + 5;
ll etf[MAX];

void init() {
	for(int i = 1; i < MAX; i++) {
		etf[i] = i;
	}
	for(int i = 2; i < MAX; i++) {
		if(etf[i] == i) {
			for(int j = i; j < MAX; j += i) {
				etf[j] = etf[j] * (i - 1) / i;
			}
		}
	}
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
		ll n;
		cin >> n;
		cout << etf[n] << endl;
	}
	return 0;
}