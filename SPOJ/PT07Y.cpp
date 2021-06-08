#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long

vector<int> arr[10001];
bool marked[10001];

void prep_adjacency_list(int n, int m) {
	while(m--) {
		int u, v;
		cin >> u >> v;
		arr[u].push_back(v);
		arr[v].push_back(u);
	}
}

void dfs(int vertex) {
	marked[vertex] = true;
	for(int neighbor: arr[vertex]) {
		if(!marked[neighbor]) {
			dfs(neighbor);
		}
	}
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n, m;
	cin >> n >> m;
	prep_adjacency_list(n, m);

	int cc_count = 0;
	for(int i = 1; i <= n; i++) {
		if(!marked[i]) {
			dfs(i);
			cc_count++;
		}
	}

	bool is_tree = (cc_count == 1) && (m == n-1);
	if(is_tree) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}