/* This solution uses the segmented sieve algorithm for finding all primes less than a given number n. Link to the algorithm is given here: https://www.geeksforgeeks.org/segmented-sieve/
Video tutorial: https://www.youtube.com/watch?v=khPI7I8H8CM
*/

#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<utility>
#include<cmath>
using namespace std;
#define ll long long

void segmentedSieve(ll L, ll R) {
    // generate all primes up to sqrt(R)
    int lim = sqrt(R);
    vector<bool> mark(lim + 1, false);
    vector<ll> primes;
    for (ll i = 2; i <= lim; ++i) {
        if (!mark[i]) {
            primes.emplace_back(i);
            for (ll j = i * i; j <= lim; j += i)
                mark[j] = true;
        }
    }

    vector<bool> isPrime(R - L + 1, true);
    for (ll i : primes){
        for (ll j = max(i * i, (L + i - 1) / i * i); j <= R; j += i){
            isPrime[j - L] = false;
        }
    }
    if (L == 1){
        isPrime[0] = false;
    }
    for(int i = 0; i < isPrime.size(); i++) {
    	if(isPrime[i]) {
    		cout << i + L << endl;
    	}
    }
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int t;
	cin >> t;
	while(t--) {
		int low, high;
		cin >> low >> high;
		segmentedSieve(low, high);
		cout << endl;
	}
	return 0;
}