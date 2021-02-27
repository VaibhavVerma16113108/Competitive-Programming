#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n;
	cin >> n;
	int arrival[n];
	int dept[n];
	for(int i = 0; i < n; i++){
		cin >> arrival[i] >> dept[i];
	}
	sort(arrival, arrival+n);
	sort(dept, dept+n);
	int curr = 0, ans = 0, ptr = 0;
	for(int j = 0; j < n; j++){
		curr++;
		if(dept[ptr] <= arrival[j]){
            curr--;
            ptr++;
        }
		ans = max(curr, ans);
	}
	cout << ans;
}