#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	double tolerance = 0.001f;
	while(true) {
		double input;
		cin >> input;
		if(input == 0.00f) {
			break;
		}
		int countCards = 2;
		double length = 0.00f;
		while(input - length > tolerance) {
			length += (1.0 / countCards);
			countCards++;
		}
		cout << countCards - 2  << " card(s)" << endl;
	}
	return 0;
}