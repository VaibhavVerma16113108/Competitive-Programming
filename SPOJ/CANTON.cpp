#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long

int f(int x) {
	return x * (x + 1) / 2;
}

int diagonal(int k) {
	// returns the greatest integer diag s.t. diag*(diag+1)/2 < k
	int diag = 1;
	while(f(diag) < k) {
		diag++;
	}
	return diag;
}

vector<int> find_fraction(int diag, int k) {
	int sum_of_num_and_den = diag + 1;
	// if diag is odd, we go up the diagonal, else we go down the diagonal.
	k = k - f(diag - 1);
	int num, den;
	if(diag % 2) {
		num = diag;
		den = 1;
		while(k > 1) {
			num--;
			den++;
			k--;
		}
	}
	else {
		num = 1;
		den = diag;
		while(k > 1) {
			num++;
			den--;
			k--;
		}
	}
	vector<int> frac = {num, den};
	return frac;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;
	while(t--) {
		int k;
		cin >> k;
		int diag = diagonal(k);
		vector<int> frac = find_fraction(diag, k);
		int num = frac[0], den = frac[1];
		cout << "TERM " << k << " IS " << num << "/" << den << endl;
	}
	return 0;
}