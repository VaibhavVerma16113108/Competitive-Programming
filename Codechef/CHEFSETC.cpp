#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long

bool subset_exists(vector<int> v, int n, int target) {
	int total = (1 << n);
	for(int mask = 0; mask < total; mask++) {
		int currSum = 0;
		for(int j = 0; j < n; j++) {
			int f = (1 << j);
			if((mask & f) != 0) {
				currSum += v[j];
			}
		}
		if(currSum == target) {
			return true;
		}
	}
	return false;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i = 0; i < n; i++) {
			cin >> v[i];
		}
		int target; 
		cin >> target;
		if(subset_exists(v, n, target)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl; 
		}
	}
	return 0;
}