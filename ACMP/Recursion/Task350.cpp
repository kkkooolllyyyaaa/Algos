#include <iostream>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <cmath>
#include <climits>
#include <vector>
using namespace std;
string s,s1;
bool u[10] = { 0 };
void fu() {
	int l = s.size(),k=0;
	if (s1.size() == l) {
		cout << s1 << endl;
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
	return 0;
}
