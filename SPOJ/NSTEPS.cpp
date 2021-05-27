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
	int t;
	cin >> t;
	while(t--) {
		int x, y; 
		cin >> x >> y;
	
		if(x == y) {
			cout << x + y - (x % 2) << endl;
		}
		else if(x - y == 2) {
			cout << x + y - (x % 2)<< endl;
		}
		else {
			cout << "No Number" << endl;
		}
		
	}
	return 0;
}