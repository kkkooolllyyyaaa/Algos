#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <vector>
#include <stdio.h>
using namespace std;
int main() {
	int t,n,m;
	int a[110][110] = { 0 };
	cin >> t;
	for (int r = 1; r <= t; r++) {
		cin >> n >> m;
		bool ok = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cin >> a[i][j];
			}
		}
		if (n < 2 || m < 2) {
			cout << YES << endl;
		}
		else {
			for (int i = 1; i <= n-1; i++) {
				for (int j = 1; j <= m-1; j++) {
					if ((a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i + 1][j + 1]) == 0 || (a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i + 1][j + 1]) == 4) {
						ok = 1;
						break;
					}
				}
			}
			if (ok) {
				cout << NO << endl;
			}
			else cout << YES << endl;
		}
	}
	return 0;
}
