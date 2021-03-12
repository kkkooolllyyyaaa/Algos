#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
string s1, s2;
string  sum(string s1, string s2) {
	int l1 = s1.length(), l2 = s2.length();
	string str;
	if (l1 > l2) {
		swap(l1, l2);
		swap(s1, s2);
	}
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	int ost = 0;
	for (int i = 0; i < l1; i++) {
		int summa = ((s1[i] - '0') + (s2[i] - '0') + ost);
		str.push_back(summa % 10 + '0');
		ost = summa / 10;
	}
	for (int i = l1; i < l2; i++) {
		int sum = ((s2[i] - '0') + ost);
		str.push_back(sum % 10 + '0');
		ost = sum / 10;
	}
	if (ost > 0) str.push_back(ost + '0');
	reverse(str.begin(), str.end());
	return str;
}
int main() {
	int n;
	cin >> n;
	string a[105][11], su;
	for (int i = 0; i <= 9; i++) {
		a[1][i] = 1;
	}
	a[1][0] = 0;
	a[1][8] = 0;
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j == 0) {
				a[i][j] = sum(a[i - 1][4], a[i - 1][6]);
			}
			else if (j == 1) {
				a[i][j] = sum(a[i - 1][6], a[i - 1][8]);
			}
			else if (j == 2) {
				a[i][j] = sum(a[i - 1][7], a[i - 1][9]);
			}
			else if (j == 3) {
				a[i][j] = sum(a[i - 1][4], a[i - 1][8]);
			}
			else if (j == 4) {
				a[i][j] = sum(sum(a[i - 1][0], a[i - 1][3]), a[i - 1][9]);
			}
			else if (j == 5) {
				a[i][j] = 0;
			}
			else if (j == 6) {
				a[i][j] = sum(sum(a[i - 1][0], a[i - 1][1]), a[i - 1][7]);
			}
			else if (j == 7) {
				a[i][j] = sum(a[i - 1][2], a[i - 1][6]);
			}
			else if (j == 8) {
				a[i][j] = sum(a[i - 1][1], a[i - 1][3]);
			}
			else if (j == 9) {
				a[i][j] = sum(a[i - 1][2], a[i - 1][4]);
			}
		}
	}
	su = a[n][0];
	for (int i = 1; i <= 9; i++) {
		su = (sum(su, a[n][i]));
	}
	cout << su << endl;
	return 0;
}
