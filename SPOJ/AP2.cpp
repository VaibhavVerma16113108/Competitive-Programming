#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;
	while(t--) {
		ll third, third_last, sum;
		cin >> third >> third_last >> sum;
		// third = a + 2*d
		// third_last = a + (n-3)*d
		// sum = (third + third_last) * n / 2
		ll num_terms = 2 * sum / (third + third_last);
		ll diff = (third_last - third) / (num_terms - 5);
		ll first = third - 2 * diff;

		cout << num_terms << endl;
		for(ll i = 1; i <= num_terms; i++) {
			cout << first + (i - 1) * diff << " ";
		}
		cout << endl;
	}
	return 0;
}