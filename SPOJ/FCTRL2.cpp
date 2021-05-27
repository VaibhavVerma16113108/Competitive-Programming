#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long

const int MAX = 1e4;

int multiply(vector<int> &res, int x, int res_size) {
	int carry = 0; 
	for(int i = 0; i < res_size; i++) {
		int prod = res[i] * x + carry;
		res[i] = prod % 10;
		carry = prod / 10;
	}
	while(carry > 0) {
		res[res_size] = carry % 10;
		carry /= 10;
		res_size++;
	}
	return res_size;
}

void factorial(int n) {
	vector<int> res(MAX, 0);
	res[0] = 1;
	int res_size = 1;
	for(int i = 2; i <= n; i++) {
		res_size = multiply(res, i, res_size);
	}
	for(int i = res_size - 1; i >= 0; i--) {
		cout << res[i];
	}
	cout << endl;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int t;
	cin >> t;
	while(t--) {
		int num; 
		cin >> num;
		factorial(num);
	}
	return 0;
}