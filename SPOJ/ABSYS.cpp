#include<iostream>
#include<vector>
#include<string>
#include<sstream>
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
		vector<string> v(5);
	    for(int i = 0; i < 5; i++) {
	    	cin >> v[i];
	    }
	    if(v[0].find("machula") != string::npos) {
	    	v[0] = to_string(stoi(v[4]) - stoi(v[2]));
	    }
	    else if(v[2].find("machula") != string::npos) {
	    	v[2] = to_string(stoi(v[4]) - stoi(v[0]));
	    }
	    else if(v[4].find("machula") != string::npos) {
	    	v[4] = to_string(stoi(v[0]) + stoi(v[2]));
	    }

	    for(string s: v) {
	    	cout << s << " ";
	    }
	    cout << endl;
	}
	return 0;
}