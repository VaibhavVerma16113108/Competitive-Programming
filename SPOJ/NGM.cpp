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

	ll n;
	cin >> n;
	if(n%10) {
		cout << 1 << endl;
		cout << n % 10;
	}
	else {
		cout << 2 << endl;
	}
	return 0;
}