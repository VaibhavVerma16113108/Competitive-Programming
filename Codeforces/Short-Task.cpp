#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long

int s[10000001];
void sieveOfEratosthenes(int MAXN)
{
    // Create a boolean array "prime[0..n]" and
    // initialize all entries in it as false.
    for(int i = 1; i <= MAXN; i++) {
    	s[i] = -1;
    }
    for(int i = 2; i <= MAXN; i++) {
    	if(s[i] == -1) {
    		for(int j = i; j <= MAXN; j+=i) {
    			if(s[j] == -1) {
    				s[j] = i;
    			}
    		}
    	}
    }
}

ll geometric_prog(int num, int pow) {
	ll p = 1;
	ll sum_factors = 0;
	for(int i = 0; i <= pow; i++) {
		sum_factors += p;
		p *= num;
	}
	return sum_factors;
}
  
// Function to generate prime factors and its power
ll generatePrimeFactors(int N)
{
    // s[i] is going to store smallest prime factor
    // of i.
  
    // Filling values in s[] using sieve
  
    // printf("Factor Power\n");
  
    int curr = s[N];  // Current prime factor of N
    int cnt = 1;   // Power of current prime factor
  	
    ll sum_factors = 1;
    // Printing prime factors and their powers
    while (N > 1)
    {
        N /= s[N];
  
        // N is now N/s[N].  If new N als has smallest
        // prime factor as curr, increment power
        if (curr == s[N])
        {
            cnt++;
            continue;
        }
  	
  		// cout << curr << "   " << cnt << endl;
        sum_factors *= geometric_prog(curr, cnt);
        // Update current prime factor as s[N] and
        // initializing count as 1.
        curr = s[N];
        cnt = 1;
    }
    return sum_factors;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int MAXN = (int) 1e7 + 5;
	sieveOfEratosthenes(MAXN-5);
	int ans[MAXN];
	for(int i = 1; i <= MAXN - 5; i++) {
		ans[i] = -1;
	}
	for(int i = 1; i <= MAXN - 5; i++) {
		ll temp = generatePrimeFactors(i);
		if(temp <= MAXN - 5 and ans[temp] == -1) {
			ans[temp] = i;
		}
	}
	int t;
	cin >> t;
	
	while(t--) {
		int c;
		cin >> c;
		cout << ans[c] << endl;
	}
	return 0;
}