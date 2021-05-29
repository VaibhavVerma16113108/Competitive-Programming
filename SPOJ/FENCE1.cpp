#include<iostream>
#include<iomanip>
#include<cmath>
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

	while(true) {
		double length;
		cin >> length;
		if(length == 0) {
			break;
		}
		double area = (length * length) / (2 * M_PI);
		cout << fixed << setprecision(2) << area << endl;
	}
	return 0;
}