#include<iostream>
#include<vector>
#include<stack>
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
		int n;
		cin >> n;
		if(n == 0) {
			break;
		}
		vector<int> order_trucks(n);
		for(int i = 0; i < n; i++) {
			cin >> order_trucks[i];
		}
		stack<int> side_street;
		bool ok = true;
		int curr = 1;
		for(int i = 0; i < n; i++) {
			if(order_trucks[i] > curr) {
				if(!side_street.empty() and side_street.top() < order_trucks[i]) {
					ok = false;
					break;
				}
				else {
					side_street.push(order_trucks[i]);
				}
			} 
			else if(order_trucks[i] == curr) {
				curr++;
			}
			while(!side_street.empty() and side_street.top() == curr) {
				side_street.pop();
				curr++;
			}
		}
		if(ok) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
	return 0;
}