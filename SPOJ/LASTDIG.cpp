#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long

ll mod_expo(ll a, ll b, ll n) {
	if(b == 0) {
		return 1;
	}
	ll ans = 1;
	while(b > 0) {
		if(b % 2 == 1) {
			ans = (ans * a) % n;
			b--;
		}
		else {
			a = (a * a) % n;
			b /= 2;
		}
	}
	return ans;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	ll t;
	cin >> t;
	while(t--) {
		ll a, b;
		cin >> a >> b;
		cout << mod_expo(a, b, 10) << endl;
	}
	
	return 0;
}