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
		int ng, nm;
		cin >> ng >> nm;
		int godzilla[ng]; 
		int mechagodzilla[nm];
		for(int i = 0; i < ng; i++) {
			cin >> godzilla[i];
		}
		for(int i = 0; i < nm; i++) {
			cin >> mechagodzilla[i];
		}
		sort(godzilla, godzilla + ng);
		sort(mechagodzilla, mechagodzilla + nm);

		int ptr1 = 0, ptr2 = 0;
		while(ptr1 < ng and ptr2 < nm) {
			if(godzilla[ptr1] < mechagodzilla[ptr2]) {
				ptr1++;
			}
			else {
				ptr2++;
			}
		}
		if(ptr1 == ng) {
			cout << "MechaGodzilla" << endl;
		}
		else {
			cout << "Godzilla" << endl;
		}
	}
	return 0;
}