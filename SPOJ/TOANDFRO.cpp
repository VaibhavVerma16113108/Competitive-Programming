#include<iostream>
#include<vector>
#include<set>
#include<string>
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
		int cols;
		string message;
		cin >> cols >> message;
		if(cols == 0) {
			break;
		}

		bool oddRow = true;  
		int length = message.size();
		int rows = length / cols;
		int ptr = 0;
		char arr[rows][cols];
		for(int i = 0; i < rows; i++) {
			for(int j = 0; j < cols; j++) {
				if(oddRow) {
					arr[i][j] = message[ptr];
				}
				else {
					arr[i][cols - 1 -j] = message[ptr];
				}
				ptr++;
			}
			oddRow = !oddRow;
		}
		for(int j = 0; j < cols; j++) {
			for(int i = 0; i < rows; i++) {
				cout << arr[i][j];
			}
		}
		cout << endl;
	}
	
	return 0;
}