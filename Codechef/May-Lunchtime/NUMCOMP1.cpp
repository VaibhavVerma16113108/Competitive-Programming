#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long

int isPrime[10000001];
int numPrimes[10000001];
vector<int> primes;

int groups(int n) {
	if(n == 2) return 1;
	else if(n == 3) return 2;
	
	return numPrimes[n] - numPrimes[n/2] + 1;
}

void sieve()
{
    const int MAX = 1e7;

    for (int i = 1; i <= MAX; i++) {
        isPrime[i] = 1;
    }
    isPrime[0] = isPrime[1] = 0;

    for (int i = 2; i * i <= MAX; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= MAX; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }
    for(int i = 1; i <= MAX; i++) {
    	numPrimes[i] = 0;
    }
    numPrimes[2] = 1;
    for (int i = 3; i <= MAX; i++)
    {
        if (isPrime[i]) {
            numPrimes[i] = 1 + numPrimes[i-1];
    	}
    	else {
    		numPrimes[i] = numPrimes[i-1];
    	}
    }
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	sieve();
	// for(int i = 2; i <= 50; i++) {
	// 	cout << i << " " << numPrimes[i] << endl;
	// }
    int t;
    cin >> t;
    while(t--) {
    	int n;
    	cin >> n;
    	cout << groups(n) << endl;
    }
	return 0;
}