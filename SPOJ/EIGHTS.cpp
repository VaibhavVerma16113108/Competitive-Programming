#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long

bool last_three_digits(ll num) {
	bool ok = true;
	for(int i = 1; i <= 3; i++) {
		ok = (ok && num % 10 == 8);
		num /= 10;
	}
	return ok;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	/* 	
		reason behind AP is that we need some number after adding that last three digits should not disturbed of 192^3.
		Let no is some x.
		(192+x)^3 = 192^3 (have last 3 digits 888) + x^3 + 3 * 192 * x ( x+ 192 ).
		to have last 3 digits of cube of 192 + x , x^3 should have last 3 digits 0 as well of 3 * 192 * x,
		from this x^3, it is clear that x should be some multiple of 10.
		from this 3 * 192 * x = 576 * x , x could be 1000 or factor of 1000 so that 576 * x always has 000 in its end. 
		so the smallest factor of 1000 whose product with 576 has 000 at end is 250. so the ans is 250.
	*/
	ll a = 192;
	ll diff = 250;
	int t;
	cin >> t;
	while(t--) {
		ll k;
		cin >> k;
		ll ans = a + (k-1) * diff;
		cout << ans << endl;
	}
	return 0;
}