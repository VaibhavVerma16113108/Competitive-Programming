#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long

const int MAX = 1000000;
int solve(vector<pair<int,int>> contest_times, int wormhole_V[], int wormhole_W[], int n, int x, int y){
	/*
		n - number of contests
		x - number of times wormhole V is available
		y - number of times wormhole W is available
	*/
	int minimum_time = MAX;
	for(int i = 0; i < n; i++){
		int start = contest_times[i].first; 
		int end = contest_times[i].second;

		/* 
		find the greatest entry time smaller than start time for contest.
		if the index found by upper_bound is j, then required index is j-1
		*/
		auto greatest = (upper_bound(wormhole_V, wormhole_V + x, start) - wormhole_V) - 1;
		auto least = lower_bound(wormhole_W, wormhole_W + y, end) - wormhole_W;

		if(least < y and greatest > -1){
			minimum_time = min(minimum_time, wormhole_W[least] - wormhole_V[greatest] + 1);
		}
	}
	return minimum_time;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int n,x,y;
	cin >> n >> x >> y;
	vector<pair<int,int>> contest_times(n);
	for(int i = 0; i < n; i++){
		int start, end;
		cin >> start >> end;
		contest_times[i] = make_pair(start, end);
	}
	int wormhole_V[x];
	for(int i = 0; i < x; i++) cin >> wormhole_V[i];

	int wormhole_W[y];
	for(int i = 0; i < y; i++) cin >> wormhole_W[i];

	sort(wormhole_V, wormhole_V + x);
	sort(wormhole_W, wormhole_W + y);
	sort(contest_times.begin(), contest_times.end());

	cout << solve(contest_times, wormhole_V, wormhole_W, n, x, y);
	return 0;
}