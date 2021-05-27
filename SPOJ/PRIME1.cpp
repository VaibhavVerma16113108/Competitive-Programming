#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long

bool isPrime(ll num) {
	if(num == 2) {
		return true;
	} else if (num == 1 or num % 2 == 0) {
		return false;
	} else {
		for(ll i = 3; i*i <= num; i += 2) {
			if(num % i == 0) {
				return false;
			} 
		}
	}
	return true;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;
	while(t--) {
		ll m, n; 
		cin >> m >> n;
		for(ll i = m; i <= n; i++) {
			if(isPrime(i)) {
				cout << i << endl;
			}
		}
		cout << endl;
	}
	return 0;
}