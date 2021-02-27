#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n;
	cin >> n;
	ll arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	ll max_so_far = 0, max_ending_here = 0, max_neg = INT_MIN;
	bool posFound = false;
	for(int i = 0; i < n; i++){
		if(arr[i] >= 0) posFound = true;
		else max_neg = max(max_neg, arr[i]);
		max_ending_here += arr[i];
		if(max_so_far < max_ending_here) max_so_far = max_ending_here;
		if(max_ending_here < 0) max_ending_here = 0;
	}
	if(posFound) cout << max_so_far;
	else cout << max_neg;
}