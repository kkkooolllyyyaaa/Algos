#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main() {
	long long n, a[1005];
	cin >> n;
	a[1] = 1;
	a[2] = 2;
	a[3] = 2;
	for (int i = 4; i <= n; i++) {
		a[i] = a[i / 2] + a[i - 2];
	}
	cout << a[n] << endl;
	return 0;
}
