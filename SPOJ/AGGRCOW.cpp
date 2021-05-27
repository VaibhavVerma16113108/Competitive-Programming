#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<algorithm>
#include<utility>
#include<stack>
using namespace std;
#define ll long long

int largest_min_dist_fast(vector<int> pos, int cows) {
	int low = 1, high = 1e9;
	while(low < high) {
		int numCows = cows - 1;
		int currPos = pos[0];
		int dist = (low + high) / 2;
		bool ok = true; // true if the current distance is a possible answer
		while(numCows > 0) {
			auto it = lower_bound(pos.begin(), pos.end(), currPos + dist);
			if(it != pos.end()) {
				currPos = *it;
			} 
			else {
				high = dist - 1;
				ok = false;
				break;
			}
			numCows--;
		}
		if(ok) {
			low = dist + 1;
		}
	}
	// answer is either low or low - 1. We check that in a somewhat dirty way
	return low - 1;
}

bool largest_min_dist(vector<int> pos, int cows, int dist) {
	
	int currPos = pos[0];
	int numCows = cows - 1;
	while(numCows > 0) {
		auto it = lower_bound(pos.begin(), pos.end(), currPos + dist);
		if(it == pos.end()) {
			return false;
		} 
		currPos = *it;
		numCows--;
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
		int stalls, cows;
		cin >> stalls >> cows;
		vector<int> pos(stalls, 0);
		for(int i = 0; i < stalls; i++) {
			cin >> pos[i];
		}
		sort(pos.begin(), pos.end());
		int ans = largest_min_dist_fast(pos, cows);
		if(largest_min_dist(pos, cows, ans + 1)) {
			cout << ans + 1 << endl;
		}
		else {
			cout << ans << endl;
		}
	}
	return 0;
}