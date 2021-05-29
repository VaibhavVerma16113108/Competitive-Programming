#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long

bool check_inverse_perm(map<int, int> mp, int arr[], int n) {
	for(int i = 1; i <= n; i++) {
		if(mp[i] != arr[i]) {
			return false;
		}
	}
	return true;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	// 2 3 4 5 1
	// mp[2] = 1
	// mp[3] = 2
	// mp[4] = 3
	// mp[5] = 4
	// mp[1] = 5
	while(true) {
		int n;
		cin >> n;
		if(n == 0) break;
		map<int, int> mp;
		int arr[n+1];
		for(int i = 1; i <= n; i++) {
			int num;
			cin >> num;
			mp[num] = i;
			arr[i] = num;
		}
		if(check_inverse_perm(mp, arr, n)) {
			cout << "ambiguous" << endl;
		}
		else {
			cout << "not ambiguous" << endl;
		}
	}
	return 0;
}