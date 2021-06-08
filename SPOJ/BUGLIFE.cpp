#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long

vector<int> arr[2001];
bool marked[2001];
int colors[2001];

void init(int n, int m) {
	for(int i = 1; i <= 2000; i++) {
		arr[i].clear();
		marked[i] = 0;
		colors[i] = 0;
	}
	while(m--) {
		int u, v;
		cin >> u >> v;
		arr[u].push_back(v);
		arr[v].push_back(u);
	}
}

bool dfs(int vertex, int color) {
	marked[vertex] = true;
	colors[vertex] = color;
	for(int neighbor: arr[vertex]) {
		if(!marked[neighbor]) {
			if(dfs(neighbor, 1 - color) == false) {
				return false;
			}
		}
		else {
			if(colors[vertex] == colors[neighbor]) {
				return false;
			}
		}
	}
	return true;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;
	for(int test = 1; test <= t; test++) {
		int n, m;
		cin >> n >> m;

		init(n, m);

		bool ok = true;
		for(int i = 1; i <= n; i++) {
			if(!marked[i]) {
				bool res = dfs(i, 0);
				ok = (ok && res);
			}
		}
		cout << "Scenario #" << test << ":\n";
		if(ok) {
			cout << "No suspicious bugs found!\n";
		}
		else {
			cout << "Suspicious bugs found!\n";
		}
	}
	return 0;
}