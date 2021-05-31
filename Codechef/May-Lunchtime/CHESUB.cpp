#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long

int maxSubArraySum(int a[], int size)
{
    int max_so_far = -1e9, max_ending_here = 0;
 
    for (int i = 1; i <= size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;
	while(t--) {
		int n,k;
		cin >> n >> k;
		int arr[n+1];

		for(int i = 1; i <= n; i++) {
			cin >> arr[i];
			// cout << arr[i] << " ";
		}
		// cout << endl;
		cout << maxSubArraySum(arr, n) << endl;
	}
	return 0;
}