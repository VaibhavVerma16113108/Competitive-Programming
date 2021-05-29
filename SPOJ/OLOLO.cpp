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

	int t;
	cin >> t;
	int exor = 0;
	while(t--) {
		int n;
		cin >> n;
		exor = exor ^ n;
	}
	cout << exor << endl;
	return 0;
}