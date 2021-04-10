#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long

int count_variations(vector<int> nums, int size, int k){
	int count = 0;
	for(int i = 0; i < size; i++){
		auto it = lower_bound(nums.begin(), nums.end(), nums[i] + k);
		if(it != nums.end()){
			count += size - (it - nums.begin());
		}
	}
	return count;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int n,k;
	cin >> n >> k;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int count = count_variations(v,n,k);
	cout << count;
	return 0;
}