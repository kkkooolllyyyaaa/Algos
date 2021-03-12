#include <iostream>
#include<stdio.h>
#include<cmath>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<vector>
using namespace std;
typedef long long int ll;
int main() {
	string s1, s2;
	cin >> s1 >> s2;
    ll ans=1, length = s1.length();
	for (int i = 0; i < length; i++) {
		if ((s1[i] <= '9' && s1[i] >= '0') && (s2[i] <= '9' && s2[i] >= '0')) {
			if (s1[i] != s2[i]) {
				cout << 0 << endl;
				return 0;
			}
		}
		if ((s1[i] >= 'a' && s1[i] <= 'g') && (s2[i] >= 'a' && s2[i] <= 'g')) {
			if ((4 - abs(int(s2[i] - s1[i]))) > 0) {
				ans = ans * (4 - abs(int(s2[i] - s1[i])));
			}
			else {
				cout << 0 << endl;
				return 0;
			}
		}
		if (s1[i] == '?') {
			if (s2[i] >= 'a' && s2[i] <= 'g') {
				ans *= 4;
			}
		}
		if (s2[i] == '?') {
			if (s1[i] >= 'a' && s1[i] <= 'g') {
				ans *= 4;
			}
		}
		if (s1[i] >= 'a' && s1[i] <= 'g') {
			if (s2[i] >= '0' && s2[i] <= '9') {
				int f = int(s1[i]) - 93;
				if ((f - int(s2[i] - '0')) >= 0 && (f - int(s2[i] - '0')) <= 4) {

				}
				else {
					cout << 0 << endl;
					return 0;
				}
			}
		}
		if (s2[i] >= 'a' && s2[i] <= 'g') {
			if (s1[i] >= '0' && s1[i] <= '9') {
				int f = int(s2[i]) - 93;
				if ((f - int(s1[i] - '0')) >= 0 && (f - int(s1[i] - '0')) <= 4) {

				}
				else {
					cout << 0 << endl;
					return 0;
				}
			}
		}
		if (s1[i] == '?' && s2[i] == '?') {
			ans *= 10;
		}
	}
	cout << ans << endl;
	return 0;
}
