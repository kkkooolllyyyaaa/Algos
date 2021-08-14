#include <iostream>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <cmath>
#include <climits>
#include <vector>
using namespace std;

string s, s1;
long long int j = 0;
bool u[10] = { 0 };

void fu(int n, int k) {
	int l = s.size();
	if (s1.size() == l) {
		for (int r = 0; r < n - 1; r++) {
			if (abs(int(s1[r + 1] - s1[r])) > k) {
				break;
			}
			if (r == n - 2) {
				j++;
			}
		}
	}
	else {
		for (int i = 0; i < l; i++) {
			if (u[i]) continue;
			u[i] = true;
			s1.push_back(s[i]);
			fu(n,k);
			u[i] = false;
			s1.pop_back();
		}
	}
}

int main() {
	int n, k,su=1;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		s.push_back(i + '0');
		su = su * i;
	}
	if (n == k) {
		cout << su << endl;
		return 0;
	}

	fu(n,k);
	cout << j << endl;
	return 0;
}
