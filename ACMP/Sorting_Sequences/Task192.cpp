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
	int n,x;
	vector<int>vec;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		vec.push_back(x);
	}
	next_permutation(vec.begin(), vec.end());
	for (int i = 0; i < n; i++) {
		cout << vec[i] << ' ';
	}
	return 0;
}
