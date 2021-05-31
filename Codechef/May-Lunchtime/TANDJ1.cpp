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
		int a,b,c,d,k;
		cin >> a >> b >> c >> d >> k;
		int xdiff = abs(a-c);
		int ydiff = abs(b-d);
		if(xdiff + ydiff > k) {
			cout << "NO\n";
		}
		else if(xdiff + ydiff == k) {
			cout << "YES\n";
		}
		else {
			int diff = k - xdiff - ydiff;
			if(diff % 2) {
				cout << "NO\n";
			}
			else {
				cout << "YES\n";
			}
		}
	}
	return 0;
}