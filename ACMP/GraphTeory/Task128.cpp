#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main() {
	int n, x1, x2, y1, y2, a[25][25] = { 0 },c=0;
	cin >> n;
	cin >> x1 >> y1 >> x2 >> y2;
	x1++;
	y1++;
	x2++;
	y2++;
	a[x1][y1] = 1;
	while (c!=10000) {
		for (int i = 2; i <= n+1; i++) {
			for (int j = 2; j <= n + 1; j++) {
				if (a[i][j] != 0) {
					if (a[i + 1][j + 2] != 0) {
						if (a[i + 1][j + 2] > a[i][j] + 1) a[i + 1][j + 2] = a[i][j] + 1;
					}
					else a[i + 1][j + 2] = a[i][j] + 1;


					if (a[i + 2][j + 1] != 0) {
						if (a[i + 2][j + 1] > a[i][j] + 1) a[i + 2][j + 1] = a[i][j] + 1;
					}
					else a[i + 2][j + 1] = a[i][j] + 1;


					if (a[i + 1][j + 2] != 0) {
						if (a[i - 1][j + 2] > a[i][j] + 1) a[i - 1][j + 2] = a[i][j] + 1;
					}
					else a[i - 1][j + 2] = a[i][j] + 1;


					if (a[i + 1][j - 2] != 0) {
						if (a[i + 1][j - 2] > a[i][j] + 1) a[i + 1][j - 2] = a[i][j] + 1;
					}
					else a[i + 1][j - 2] = a[i][j] + 1;

					if (a[i - 1][j - 2] != 0) {
						if (a[i - 1][j - 2] > a[i][j] + 1) a[i - 1][j - 2] = a[i][j] + 1;
					}
					else a[i - 1][j - 2] = a[i][j] + 1;

					if (a[i - 2][j + 1] != 0) {
						if (a[i - 2][j + 1] > a[i][j] + 1) a[i - 2][j + 1] = a[i][j] + 1;
					}
					else a[i - 2][j + 1] = a[i][j] + 1;


					if (a[i + 2][j - 1] != 0) {
						if (a[i + 2][j - 1] > a[i][j] + 1) a[i + 2][j - 1] = a[i][j] + 1;
					}
					else a[i + 2][j - 1] = a[i][j] + 1;


					if (a[i - 2][j - 1] != 0) {
						if (a[i - 2][j - 1] > a[i][j] + 1) a[i - 2][j - 1] = a[i][j] + 1;
					}
					else a[i - 2][j - 1] = a[i][j] + 1;

				}

			}
		}
		c++;
	}
	cout << a[x2][y2]-1 << endl;
	return 0;
}
