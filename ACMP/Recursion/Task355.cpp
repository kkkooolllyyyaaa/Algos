#include <iostream>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <cmath>
#include <climits>
#include <vector>
using namespace std;
string s, s1;
vector<string>str(40322);
int c = 0;
bool u[10] = { 0 };
void fu() {
	int l = s.length();
	if (s1.length() == l) {
		for (int i = 0; i < s1.length(); i++) {
			str[c].push_back(s1[i]);
		}
		c++;
	}
	else {
		for (int i = 0; i < l; i++) {
			if (u[i]) continue;
			u[i] = true;
			s1.push_back(s[i]);
			fu();
			u[i] = false;
			s1.pop_back();
		}
	}


}
int main() {
	cin >> s;
	fu();
	sort(str.begin(), str.end());
	for (int i = 1; i < str.size(); i++) {
		if (str[i] != str[i - 1]) {
		cout << str[i] << endl;
		}
	}
	return 0;
}
