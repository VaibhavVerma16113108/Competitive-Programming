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

	const ll MODULO = 1000007;
	int t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		ll ans = (3*n*(n+1)/2 - n) % MODULO;
		cout << ans << endl;
	}
	return 0;
}