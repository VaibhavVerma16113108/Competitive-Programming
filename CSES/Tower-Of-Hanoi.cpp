#include <iostream>
using namespace std;

void towerOfHanoi(int n, int src, int helper, int dest){
	if(n > 0){
		towerOfHanoi(n-1, src, dest, helper);
		cout << src << " " << dest << endl;
		towerOfHanoi(n-1, helper, src, dest);
	}
}

int main(){
	int n;
	cin >> n;
	cout << (1 << n) -1 << endl;
	towerOfHanoi(n, 1, 2, 3);
}