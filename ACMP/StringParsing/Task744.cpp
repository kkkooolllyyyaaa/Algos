#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <vector>
using namespace std;
bool fu(string s) {
	stack<int>a;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') a.push(1);
		else if (s[i] == '[') a.push(2);
		else if (s[i] == '{') a.push(3);
		else if (s[i] == ')') {
			if (a.empty()) {
				return 1;
			}
			else if(a.top()==1) {
				a.pop();
			}
			else return 1;
		}

		else if (s[i] == ']') {
			if (a.empty()) {
				return 1;
			}
			else if (a.top() == 2) {
				a.pop();
			}
			else return 1;
		}
		else if (s[i] == '}') {
			if (a.empty()) {
				return 1;
			}
			else if (a.top() == 3) {
				a.pop();
			}
			else return 1;
		}
	}
	if (a.empty() == 1) {
		return 0;
	}
	else return 1;
}
int main() {
	string s;	
	cin >> s;
	for (int i = 0; i <= s.length(); i++) {
		if (fu(s) == 0) {
			cout << YES << endl;
			return 0;
		}
		for (int j = 0; j < s.length() - 1; j++) {
			swap(s[j], s[s.length() - 1]);
		}
	}
	cout << NO << endl;
	return 0;
}
