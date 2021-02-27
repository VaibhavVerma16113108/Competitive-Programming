#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool comp(pair<int,int> &a, pair<int,int> &b){
	if(a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}

int main(){
	int n;
	cin >> n;
	vector<pair<int, int>> v;
	for(int i = 0; i < n; i++){
		int arrival, dept;
		cin >> arrival >> dept;
		v.push_back({arrival, dept});
	}
	sort(v.begin(), v.end(), comp);
	int ans = 0, curr_end = 0;
	for(auto p: v){
		if(p.first >= curr_end){
			curr_end = p.second;
			ans++;
		}
	}
	cout << ans;
}