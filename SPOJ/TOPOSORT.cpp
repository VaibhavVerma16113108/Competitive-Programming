#include<iostream>
#include<vector>
#include<set>
#include <queue>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long

vector<int> arr[10001];
int in_degree[10001];
vector<int> topological_sort;

bool kahn(int V) {
	priority_queue<int, vector<int>, greater<int> > pq;
	for(int i = 1; i <= V; i++) {
		if(in_degree[i] == 0) {
			pq.push(i);
		}
	}
	while(!pq.empty()) {
		int first = pq.top();
		topological_sort.push_back(first);
		pq.pop();

		for(int neighbor: arr[first]) {
			in_degree[neighbor]--;
			if(in_degree[neighbor] == 0) {
				pq.push(neighbor);
			}
		}
	}
	return topological_sort.size() == V;
}

void init(int E) {
	for(int i = 1; i <= 10001; i++) {
		in_degree[i] = 0;
	}
	while(E--) {
		int u, v;
		cin >> u >> v;
		arr[u].push_back(v);
		in_degree[v]++;
	}
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int V, E;
	cin >> V >> E;
	init(E);
	if(!kahn(V)) {
		cout << "Sandro fails.";
	}
	else {
		for(int node: topological_sort) {
			cout << node << " ";
		}
	}
	return 0;
}