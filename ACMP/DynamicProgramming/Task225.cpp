#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int main() {
	int n, a[5005][4], b[5005];
	cin >> n;
	//3
	for (int i = 1; i <= n; i++) {
		cin >> a[i][1] >> a[i][2] >> a[i][3];
		b[i] = INT_MAX;
	}
	b[0] = 0;
	b[1] = a[1][1];
	b[2] = min(a[1][1] + a[2][1], a[1][2]);
	for (int i = 3; i <= n; i++) {
		if (b[i - 1] + a[i][1] < b[i]) b[i] = b[i - 1] + a[i][1];
		if (b[i - 2] + a[i - 1][2] < b[i]) b[i] = b[i - 2] + a[i - 1][2];
		if (b[i - 3] + a[i - 2][2] + a[i][1] < b[i]) b[i] = b[i - 3] + a[i - 2][2] + a[i][1];
		if (b[i - 3] + a[i - 2][3] < b[i]) b[i] = b[i - 3] + a[i - 2][3];
	}
	cout << b[n] << endl;
	return 0;
}
