#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<algorithm>
#include<utility>
#include<stack>
using namespace std;
#define ll long long

string infix_to_postfix(string exp) {
	stack<char> brackets;
	stack<char> operators;

	string rpn = "";
	for(int i = 0; i < exp.size(); i++) {
		if(exp[i] == '(') {
			brackets.push(exp[i]);
		}
		else if(exp[i] == ')') {
			char opr = operators.top();
			operators.pop();
			rpn += opr;
		}
		else if(exp[i] == '+' or exp[i] == '-' or exp[i] == '*' or exp[i] == '/' or exp[i] == '^') {
			operators.push(exp[i]);
		}
		else {
			rpn += exp[i];
		}
	}
	return rpn;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;
	while(t--) {
		string exp; 
		cin >> exp;
		string rpn = infix_to_postfix(exp);
		cout << rpn << endl;
	}
	return 0;
}