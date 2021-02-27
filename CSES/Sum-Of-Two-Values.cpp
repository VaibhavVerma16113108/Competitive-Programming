#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n,x;
	cin >> n >> x;

	vector< pair<int, int> > arr;
	for(int i = 0; i < n; i++){
		int num; cin >> num;
		arr.push_back( make_pair(num, i+1) );
	}
	sort(arr.begin(), arr.end());
   
	bool found = false;
	int i = 0, j = n-1;
	while(i < j){
		if(arr[i].first + arr[j].first == x){
			found = true;
			cout << arr[i].second << " " << arr[j].second << endl;
			i++; j--;
		}
		else if(arr[i].first + arr[j].first < x){
			i++;
		}
		else{
			j--;
		}
	}
	if(!found) cout << "IMPOSSIBLE";
}