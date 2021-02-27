#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
int main(){
	int n, m, k;
	cin >> n >> m >> k;

	int desiredPrices[n];
	for(int i = 0; i < n; i++) cin >> desiredPrices[i];
	sort(desiredPrices, desiredPrices+n);

	int actualPrices[m];
	for(int i = 0; i < m; i++) cin >> actualPrices[i];
	sort(actualPrices, actualPrices+m);
	int ans = 0, i = 0, j = 0;
	while(i < m && j < n){
		// find an element di in desiredPrices such that di - k <= actualPrices[i] <= di + k
		// make this element zero so that we don't use it for any other applicant
		if(desiredPrices[j] - k <= actualPrices[i] && actualPrices[i] <= desiredPrices[j] + k){
			ans++;
			j++;
            i++;
		}
		else if(desiredPrices[j] - k > actualPrices[i]){
            i++;
		}
		else if(desiredPrices[j] + k < actualPrices[i]){
			j++;
		}
	}
	cout << ans;
}