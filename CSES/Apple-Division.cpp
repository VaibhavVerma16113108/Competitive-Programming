#include <iostream>
using namespace std;
#define ll long long
int main(){
	int n;
	cin >> n;
	ll arr[n];

	ll sum = 0;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		sum += arr[i];
	}
	ll ans = sum;
	for(int i = 0; i < (1 << n); i++){
		ll curr = 0;
		for(int j = 0; j < n; j++){
			if(i & (1 << j)){
				curr += arr[j];
			}
		}
		ans = min(ans, abs(2*curr - sum));
	}
	cout << ans;
}