#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;
int main() {
	stack<int>a;
	int k=0,k1=0,k2=0;
	string s;
	cin >> s;
	if (s.length() % 2 != 0) {
		cout << -1 << endl;
		return 0;
	}
	else {
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '(' || s[i] == '[') k1++;
			if (s[i] == ')' || s[i] == ']') k2++;

		}
	}
	if (k1 != k2) {
		cout << -1 << endl;
		return 0;
	}
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') a.push(1);
		else if (s[i] == '[') a.push(2);
		else if (s[i] == ')') {
			if (a.empty() == 1) {
				cout << -1 << endl;
				return 0;
			}
			if (a.top() == 1) {
				a.pop();
			}
			else {
				k++; a.pop();
			}
		}
		if (s[i] == ']') {
			if (a.empty() == 1) {
				cout << -1 << endl;
				return 0;
			}
			if (a.top() == 2) {
				a.pop();
			}
			else {
				k++; a.pop();
			}
		}
		
	}
	cout << k << endl;
	return 0;
}
