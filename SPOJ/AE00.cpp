#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long

int factors(int n) {
	int numFactors = 0;
	for(int i = 1; i*i <= n; i++) {
		if(n % i == 0) {
			numFactors++;
		}
	}
	return numFactors;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin >> n;
	int ans = 0;
	for(int i = 1; i <= n; i++) {
		ans += factors(i);
	}
	cout << ans;
	return 0;
}