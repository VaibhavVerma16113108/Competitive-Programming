#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long

int rev(int x) {
	int reversed = 0;
	while(x > 0) {
		int digit = x % 10;
		reversed = 10 * reversed + digit;
		x /= 10;
	}
	return reversed;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t; 
	while(t--) {
		int a, b;
		cin >> a >> b;
		cout << rev(rev(a) + rev(b)) << endl;
	}
	return 0;
}