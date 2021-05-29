#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long

ll sum_of_squares_of_digits(ll n) {
	ll ans = 0;
	while(n) {
		ans += (n%10)*(n%10);
		n /= 10;
	}
	return ans;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	map<ll, bool> mp;
	ll n;
	cin >> n;
	mp[n] = true;
	int steps = 0;
	while(mp[n] and n > 1) {
		n = sum_of_squares_of_digits(n);
		if(mp.find(n) != mp.end()) {
			break;
		}
		mp[n] = true;
		steps++;
	}
	if(n == 1) {
		cout << steps;
	}
	else {
		cout << -1;
	}
	return 0;
}